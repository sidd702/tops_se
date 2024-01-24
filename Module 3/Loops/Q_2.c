/* 2. WAP to accept 5 numbers from user and display all numbers
*/
#include <stdio.h>

int main ()
{
    int i[5],c;
    for(c=0;c<5;c++){
        printf("Enter value ");
        scanf("%d",&i[c]);
    }
    for(c=0;c<5;c++){
        printf("%d ",i[c]);
    }
  return 0;
}