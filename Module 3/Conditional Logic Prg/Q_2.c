/*
2. Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0
*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter a ");
    scanf("%d",&a);
    if(a>0)
        printf("%d > 0",a);
    else if(a<0)
        printf("%d < 0",a);
    else
        printf("0");
    return 0;
}