/*
21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable
*/
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    a=a+b;//1 = 1+2
    b=a-b;
    a=a-b;
    printf("a %d b %d",a,b);
    return 0; 
}