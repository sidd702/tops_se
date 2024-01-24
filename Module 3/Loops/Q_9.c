/*
9. Write a program make a summation of given number (E.g., 1523 Ans:11)
*/
#include <stdio.h>

int main() {
    int i,n,n1,d,sum;
    d=10;
    printf("Enter num ");
    scanf("%d",&n);
    
    if(n<0){
        n*=-1;
    }
    
    n1=n;
    sum=0;
    while(n1!=0){
        i=n1%d;
        sum+=i;
        n1/=10;
    }
    printf("\nsum is %d",sum);
    return 0;
}