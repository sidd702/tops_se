/*
7. Write a program in C to copy one string to another string.
*/
#include <stdio.h>
#define MAX_SIZE 50
int main()
{
    int l=0;
    char str1[MAX_SIZE], str2[MAX_SIZE];


    printf("Enter String1: ");
    fgets(str1, MAX_SIZE, stdin);

    for(l=0; str1[l]!='\0'; ++l) {
        str2[l] = str1[l];
    }
    
    printf("%s",str1);
    printf("\n%s",str1);

    return 0;
}