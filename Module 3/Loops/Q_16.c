/*
16. Calculate the Sum of Natural Numbers Using the While Loop
*/
#include <stdio.h>

int main() {
    int count=1,sum=0;
    
    printf("\nEnter num ");
    scanf("%d",&count);
    
    while(count>0){
        sum+=count;
        count--;
    }
    
    printf("Sum is %d",sum);
    return 0;
}