#include <stdio.h>
#include<string.h>

void decimal(int decimalnumber){
    
    int i=0;
    int binary[32];
    
    for(i=0; decimalnumber > 0; i++){
        
        binary[i]=decimalnumber % 2;
        decimalnumber /= 2;
    }
    
    printf("__________________________\n");
    
    printf("\tBinary Value is :- ");
    
    for(int j = i-1; j >= 0; j--){
        
        printf("%d",binary[j]);
    }
    printf("\n");
        
   
}

int main() {
   
   
  int opt;
  
  printf("BINARY AND DECIMAL\n");
  printf("\n");
  printf("\tBinary into decimal======> 1\n");
  printf("\tDecimal into  binary=====> 2\n");
  printf("\n");
  printf("choose 1 or 2 : ");
 
  scanf("%d",&opt);
  
  
  
  int number;
  
 if(opt==2) {
     
  printf("\n");
  printf("__________________________\n");
  printf("Enter Your  Decimal Number: ");
  scanf("%d",&number);
  
  if(number < 0){
      
      printf("\tInvalid Input!");
      
      return 1;
  }
  
  decimal(number);
  
  
 }
 
 else if(opt == 1){
     
     char number[32];
    
    printf("\n");
    printf("__________________________\n");
    printf("Enter Your binary Number: ");
    scanf("%s",&number);
    
    
    int total=0;
    
    int decimal=1;
    
    int len=strlen(number);
    
    for(int i = len - 1; i >= 0; i--){
        
        if(number[i] != '1' && number[i] != '0'){
            
            printf("\tInvalid Input!");
            
            return 1;
        }
        
        if(number[i] == '1'){
            
            total += decimal;
        }
        
        decimal *= 2;
    }
    printf("__________________________\n");
    printf("\tDecimal value is:- %d",total);
  
 }
 
 else{
     
     printf("Please Enter 1 or 2!");
 }
  
  

    return 0;
}