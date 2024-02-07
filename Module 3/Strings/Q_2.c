/* 2. Write a program in C to separate individual characters from a string.
*/
#include <stdio.h>

int main()
{
    int l=0;
    char str[50];
    printf("Enter String: ");
    fgets(str, 50, stdin);

    for(l=0; str[l]!='\0'; ++l){
        printf("\n%c",str[l]);
    }
    
    printf("Size %d",l);

    return 0;
}