#include <stdio.h>

int main() {
    int n1,n2,operation,ans;
    printf("Enter First number:");
    scanf("%d",&n1);
    
    printf("Enter second number:");
    scanf("%d",&n2);
    
    printf("\noperatin\n");
    
    printf("\taddition       ->1\n");
    printf("\tsubtraction    ->2\n");
    printf("\tmultiplication ->3\n");
    printf("\tdivision       ->4\n");
    printf("\tremainder      ->5\n");
    printf("chose any operation\n");
    scanf("%d",&operation);
    
    switch(operation){
        case 1:
        ans=n1+n2;
        break;
        
        case 2:
        ans=n1-n2;
        break;
        
        case 3:
        ans=n1*n2;
        break;
        
        case 4:
        ans=n1/n2;
        break;
        
        case 5:
        ans=n1%n2;
        break;
        
        default :
        printf("Invalid number");
    }
    printf("Answer is: %d",ans);
    

    return 0;
}