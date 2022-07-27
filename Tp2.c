#include <stdio.h>

int main()
{
    char nom[10] = {"0"};
    float note1 = 0.0;
    int coef1 = 0;
    float note2 = 0.0;
    int coef2 = 0;
    float moyen = 0.0;

       printf("Saisie votre nom\n");
       scanf("%s",&nom);

         printf("donner la note1 \n");
         scanf("%f",&note1);
      
       printf("donner le coeficiant de note1\n");
       scanf("%d",&coef1);
       
       printf("donner la note2\n");
       scanf("%f",&note2);
       printf("donner le coeficiant de note2\n");
       scanf("%d",&coef2);
    
       moyen = ((note1*coef1)+(note2*coef2))/(coef1+coef2);

       if(moyen<10){
            printf("%s la moyenne est : %f",nom,moyen);
            printf("\nmension médiocre \n");
       } else if(moyen == 10){
            printf("%s la moyenne est : %f",nom,moyen);
            printf("\nmension passable\n");
       } else if( (moyen >= 12) && (moyen <14)){
          printf("%s la moyenne est : %f",nom,moyen);
           printf("\nmension Trés bien\n");
       } else{
        printf("%s la moyenne est : %f",nom,moyen);
        printf("\nmension Excellent\n\n");
       }
      
      return 0;
}