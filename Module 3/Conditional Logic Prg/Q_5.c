/*
5. Check Number Is Positive or Negative
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