
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

const int code = 2356;

int main()
{
    char cd[8] = {"0"};
    int i = 0;
    int essaie = 0;
    
    while(essaie <3 ){
        
        printf("\n Saisie le code : \n");
        
        scanf("%s",cd);
        
       bool isCorrect = true;
        
        size_t length = strlen( cd );
        
        for( int i=0; i<length; i++ ) {
            
            if ( ! isdigit( cd[i] ) ) {
                isCorrect = false;
            }
            
        }
    
       if ( isCorrect ) {
           int val = atoi(cd);
           if(code == val){
                printf( " code secret correct ! \n\n");
                 break;
           }else{
               printf("le code secret saisi est incorrect ! \n");
               
           }
           
        } else {
            printf( "le code doit être un entier ! \n");
        }
        
        essaie += 1;
        
        if(essaie == 2){
            printf("\n il te reste un seul essai.");
        }
    }
    
    if(essaie == 3){
        printf("Fin de tantative !\n\n");
    }
   
  return 0;
}