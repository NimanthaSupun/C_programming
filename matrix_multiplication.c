#include <stdio.h>

int main() {

  int R1,C1;
  int R2,C2;
  
  do{
      
  // get size for matrix 1
  
  printf("SIZE FOR MATRIX 1: ");
  scanf("%d %d",&R1,&C1);
  
  // get size for matrix2
  
  printf("SIZE FOR MATRIX 2: ");
  scanf("%d %d",&R2,&C2);
  
   // To perform multiplication of two matrices, we should make sure 
   // that the number of columns in the 1st matrix is equal to the
   // rows in the 2nd matrix.
  
  if (C1 != R2)printf("Can't Multiply matrices re Enter size!\n");

  }
  while(C1 != R2);
  
  int A[R1][C1],B[R2][C2];
  
  // get values for matrix1
  
  printf("MATRIX1: \n");
  
  for(int i = 0; i < R1; i++) {
      for(int j = 0; j < C1; j++) {
          printf("%d. ", i + 1, j + 1);
          scanf("%d",&A[i][j]);
      }
  }
  
  // get values for matrix2
  
  printf("MATRIX2: \n");
  for(int i = 0; i < R2; i++) {
      for(int j = 0; j < C2; j++) {
          printf("%d. ", i + 1, j + 1);
          scanf("%d",&B[i][j]);
      }
      
  }
     
    int C[R1][C2];
  
    //Therefore,the resulting matrix product will be have a number
    //of rows of the 1st matrix and a number of columns of the 
   // 2nd matrix. 
  
  for(int i = 0; i < R1; i++) { 
      for(int j = 0; j < C2; j++) {
          C[i][j] = 0;
          
          for(int k = 0; k < C1; k++) {
              
              // An element in matrix C where is the multipication
              // of matrix A X B.
              
              C[i][j] += A[i][k] * B[k][j];
          }
          
      }
      
  }
  
  
  // display final result.
  
  printf("MULTIPLICATION OF MATRIX(1X2)\n");
  
  for(int i = 0; i < R1; i++) {
      for(int j = 0; j < C2; j++) {
          
          printf("%5d",C[i][j]);
      }
      
      printf("\n");
      
  }

    return 0;
    
}