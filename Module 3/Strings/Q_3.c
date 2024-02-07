/*
3. Write a program in C to print individual characters of a string in reverse order
*/
#include <stdio.h>

int main()
{
    int l=0;
    char str[50];
    printf("Enter String: ");
    fgets(str, 50, stdin);

    for(l=0; str[l]!='\0'; ++l);

    for(--l; l>=0; --l) {
        printf("%c ",str[l]);
    }

    return 0;
}