/* 17. Write a C program to check whether a triangle can be formed with the given
values for the angles.
*/
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    printf("Enter c ");
    scanf("%d",&c);
    
    if((a+b > c) && (a+c>b) && (c+b>a))
        printf("Triangle can be formed");
    else
        printf("Triangle can NOT be formed");
    
    return 0;
}