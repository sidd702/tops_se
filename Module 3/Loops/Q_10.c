/*
10.Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: 5)
*/
#include <stdio.h>

int main() {
    int n,n1,x1,x2;
    printf("Enter num ");
    scanf("%d",&n);
    
    n1=n;
    x1=n1%10;
    while(n1!=0){
        if(n1<10){
            // printf("In");
            x2=n1;
        }
        n1/=10;
    }
    printf("\nsum is %d",x1+x2);
    return 0;
}