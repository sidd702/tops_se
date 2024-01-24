/* 18. Write a C program to calculate profit and loss on a transaction
*/
#include <stdio.h>
int main() {
    int b,s;
    printf("Enter buy price ");
    scanf("%d",&b);
    printf("Enter sell price ");
    scanf("%d",&s);
    
    if(b>s)
        printf("Loss of %d",b-s);
    else
        printf("Profit of %d",s-b);
    
    return 0;
}