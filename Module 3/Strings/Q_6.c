/*
6. Write a program in C to count the total number of alphabets, digits and special characters in a string.
*/
#include <stdio.h>
#define MAX_SIZE 50
int main()
{
    int l,dc,ac,sc;
    char str[MAX_SIZE];

    l=dc=ac=sc=0;

    printf("Enter String: ");
    scanf("%[^\n]%*c",str);
    // fgets(str, MAX_SIZE, stdin);
    // fgets takes newline in string

    for(l=0; str[l]!='\0'; ++l) {

        if ((str[l] >= 'a' && str[l] <= 'z') || (str[l] >= 'A' && str[l] <= 'Z')) {
            ac++;
            continue;
        } else if (str[l] >= '0' && str[l] <= '9') {
            dc++;
            continue;
        } else {
            sc++;
        }
    }
	
    printf("AC %d DC %d SC %d",ac,dc,sc);

    return 0;
}