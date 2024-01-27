#include <stdio.h>
#include<string.h>

int word_count(char *name,int *max, int *min);

int main() {
    
       char  name[100];
    
    printf("Enter Statement: ");
    fgets(name,sizeof(name),stdin);
    
    int max, min;
    
    word_count(name,&max,&min);
    
    
    int word = 0;
    int ch = 0;
    
    
     for (int i = 0; name[i]; i++) {
     
     
     if(name[i] != ' ' && name[i] != '\n' && name[i] != '.' && name[i] != ',') {
         ch++;
     }
     
     if((name[i] == ' ' || name[i] == '\n' || name[i] == ','|| name[i] == '.') && (name[i -1 ] != ' ' && name[i - 1] != '\n' && name[i - 1] != ',' && name[i- 1] != '.')) {
         
         word++;
     }
    
         
   
     
     
 }
 
    
    
    printf("=========================\n");
    printf("Words Count is          : %d\n",word);
    printf("Characters Count is     : %d\n",ch);
    printf("length of maximum word  : %d\n",max);
    printf("lenngth of minimum word : %d\n",min);
    

    
    
    return 0;
}


int word_count(char *name,int *max, int *min) 

{
    
    
    int len = strlen(name);
    
    int total = 0;
    
     *min  = 100000;
    
     *max = -1;
    
    char nonword[] = " !-.,;\n\t";
    
    
    int i = 0;
    
    while(i < len ) {
        
        
        
        total = 0;
        
        while(i < len) {
            
            if(strchr(nonword,name[i]) != NULL)
              break;
              
        i++;
        
        total++;
        
        }
        
        if(total > *max){
            
            *max = total;
        }
        
        if( total < *min ) {
            
            *min = total;
        }
        
        while(i < len ){
            
            if(strchr(nonword,name[i]) == NULL)
              break;
              
        
        i++;      
        
        }
        
    }
   
}