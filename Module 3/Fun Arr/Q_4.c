/*
4. WAP to find factorial using recursion
*/
#include <stdio.h>
int fact(int);
int main()
{
    int i = 4;
    printf("Enter a positive integer: ");
    scanf("%d",&i);
    
    printf("Factorial of %d = %d", i, fact(i));
    return 0;
}

int fact(int n){
    if(n>0){
        return n*fact(n-1);
    }else{
        return 1;
    }
}