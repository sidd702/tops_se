/*
8. Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)
*/
#include <stdio.h>

int main() {
    int i,n,n1,d,max;
    d=10;
    printf("Enter num ");
    scanf("%d",&n);
    
    if(n<0){
        n*=-1;
    }
    
    n1=n;
    max=n1%d;
    while(n1!=0){
        i=n1%d;
        // printf("i %d\n",i);
        max = i>max ? i : max;
        // printf("in max %d\n",max);
        n1/=10;
    }
    printf("\nmax is %d",max);
    return 0;
}