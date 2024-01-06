#include <stdio.h>

int main() {
   int number;
   int password = 2343;
   
   printf("Enter password:\n");
   
   for(int i=0;i<3;i++){
       scanf("%d",&number);
       
       if(password==number){
           printf("Password is correct\n");
           break;
       }
       else{
           printf("password is incorrect\n");
           if(i==2){
               printf("\ttime is over");
           }
       }
       
   }

    return 0;
}