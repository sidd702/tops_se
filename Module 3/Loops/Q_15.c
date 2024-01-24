/*
15.Calculate sum of 10 numbers using of while loop
*/
#include <stdio.h>

int main() {
    int n,count=1,sum=0;
    
    do{
        printf("\nEnter %d num ",count);
        scanf("%d",&n);
        count++;
        sum+=n;
    }while(count<11);
    printf("Sum is %d",sum);
    return 0;
}