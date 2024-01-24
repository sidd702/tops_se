/*
1. Write a C program to accept two integers and check whether they are equal or not
*/
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    if(a==b)
        printf("Eq");
    else
        printf("Not Eq");
    return 0;
}