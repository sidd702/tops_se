/* 1. Write a program in C to find the length of a string without using library
functions. */
#include <stdio.h>

int main()
{
    int l=0;
    char str[50];
    printf("Enter String: ");
    //scanf("%[^\n]%*c", str);
    fgets(str, 50, stdin);

    for(l=0; str[l]!='\0'; ++l);
    
    printf("Size %d",l);

    return 0;
}