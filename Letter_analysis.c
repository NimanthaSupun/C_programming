
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    
    
    
    char name[100]; 
    
    printf("Enter your sentence: ");
    fgets(name,sizeof(name),stdin);
    
    
    name[strcspn(name,"\n")]='\0';
  
    
    
    int len = strlen(name);
    
    int capital =0;
    int simple =0;
    
    for (int i = 0;  i < len; i++){
        
        
        
        if(isupper(name[i])){
            
            capital++;
        }
        else if(islower(name[i]) != 0){
            
            simple++;
        }
    }
    
    
    printf("Capital letters  : %d\n",capital);
    printf("Simple letters   : %d\n\n",simple);
    
    
    printf("You entered : %s\n\n",name);
    
    
    
    for (int i = 0; name[i]; i++){
        
        if (isspace(name[i]) != 0){
            
            printf("%c space\n",name[i]);
        
        }
        
         if(isupper(name[i]) != 0){
            
            printf("%c : is capital\n",name[i]);
            
          }
          
          else if(islower(name[i]) != 0){
              
              printf("%c : is simple\n",name[i]);
          }
        
    }

    return 0;
}