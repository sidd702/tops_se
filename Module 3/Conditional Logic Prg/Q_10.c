/*
10. WAP to check whether a number is negative, positive or zero.
*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter a ");
    scanf("%d",&a);
    if(a>=0)
        printf("%d Positvie",a);
    else if(a<0)
        printf("%d Negative",a);

    return 0;
}