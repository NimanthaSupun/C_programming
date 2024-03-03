#include <stdio.h>

int main() {
  
   int len1,len2;
   
   printf("Enter Size For Row And Column: ");
   scanf("%d %d",&len1,&len2);
   
   int A[len1][len2];
 
   for(int i = 0; i < len1; i++){
       for(int j = 0; j < len2; j++){
           
           printf("[%d][%d]: ", i + 1, j + 1);
           scanf("%d",&A[i][j]);
      }
   }
   
   //print original matrix
   printf(":::::::::::::::::::::::::::::::::\n");
   printf("MATRIX\n");
   printf("\n");
   
   for(int i = 0; i < len1; i++){
       for(int j = 0; j < len2; j++){
           
           printf("%5d",A[i][j]);
       }
       printf("\n");
   }
   
   int T[len2][len1];
   
   for(int i = 0; i < len1; i++){
       
       for(int j = 0; j < len2; j++){
           
           T[j][i] = A[i][j];
       }
   }
 
 //transpose of matrix
printf("\n");
printf(":::::::::::::::::::::::::::::::::\n");
printf("TRANSPOSE OF MATRIX\n");

for(int i = 0; i < len2; i++){
    
    for(int j = 0; j < len1; j++){
        
        printf("%5d",T[i][j]);
    }
    printf("\n");
}

   
    return 0;
}