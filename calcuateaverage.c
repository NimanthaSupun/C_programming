#include <stdio.h>

int main() {

int count;

float avg,total;

printf("Number of value:- ");


if(scanf("%d",&count)!=1||count<=0){
    
    printf("invalid input ");
    
    return 1;
}

for(int i=0;i<count;i++){
    
    float number;
    
    printf("Enter value %d:- ",i+1);
    
    if(scanf("%f",&number)!=1){
        
        printf("invlid input please enter numeric value .\n");
        
    return 1;
    }
    
    total+=number;
    
    }

        avg=total/count;
        printf("==================\n\n");
        printf("Total value is = %.9g\n",total);
        printf("Average is     = %.9g",avg);
        
    return 0;
}