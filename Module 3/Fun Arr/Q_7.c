/*
7. WAP Find out length of string without using inbuilt function
*/
#include <stdio.h>
int main()
{
    char str[50];
    int l;
    
    printf("Enter string ");
    fgets(str, 50, stdin);
    
    for (l = 0; str[l] != '\0'; ++l);
    printf("\n%d",l-1);
    
    return 0;
}