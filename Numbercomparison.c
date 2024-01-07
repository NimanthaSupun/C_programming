
#include <stdio.h>

int main() {
    
    int n1,n2,n3;
    
    printf("Enter three numbers:");
    
    scanf("%d %d %d",&n1,&n2,&n3);
    
    int greatest = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    
    int least =  n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
    
    
    printf("Greatest number is: %d\n",greatest);
    
    printf("Least number is: %d\n",least);
  

    return 0;
}