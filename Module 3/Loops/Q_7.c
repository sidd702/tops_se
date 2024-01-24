/*
7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746
*/
#include <stdio.h>

int main() {
    int n,n1;
    
    printf("Enter num ");
    scanf("%d",&n);
    
    n1=n;
    while(n1!=0){
        printf("%d",n1%10);
        n1/=10;
    }
    return 0;
}