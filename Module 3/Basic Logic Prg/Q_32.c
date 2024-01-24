/*
32. Accept 2 numbers and find out its sum check it size
*/
#include <stdio.h>
int main() {
    int a,b;

    printf("Enter a ");
    scanf("%d",&a);
    printf("\nEnter b ");
    scanf("%d",&b);
    
    printf("a %d b %d sum %d size %d",a,b,a+b, sizeof(a+b));

    return 0;
}