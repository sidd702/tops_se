/*
23. WAP to calculate swap 2 numbers with using of multiplication and division.
*/
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    
    //3 = 3 * 4        12 4
    a = a * b;
    //4 = a12 / b4     12 3
    b = a / b;
    //a12 = 12 / b4    4 3
    a = a / b;
    printf("a %d b %d",a,b);
    return 0;
}