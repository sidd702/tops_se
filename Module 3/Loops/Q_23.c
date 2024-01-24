/*
23. C Program to Reverse a Number Using FOR Loop
*/
#include <stdio.h>
int main (){
    int n,origional,rev,rem;
    printf("\nEnter num ");
    scanf("%d",&origional);
    
    for(n=origional;n!=0;n/=10){
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    printf("Reverse %d",rev);
    
    return 0;
}
