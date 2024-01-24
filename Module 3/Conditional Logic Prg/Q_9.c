/*
9. C Program to Check Uppercase or Lowercase or Digit or Special
Character

32 to 47 Special
48 to 57 digit
58 to 64 Spec
65 to 90 ABC..Z
91 to 96 Spec
97 to 122 abc..z
123 to 127 spec
*/
#include <stdio.h>
int main() {
    char c;
    int i;
    printf("Enter Char ");
    scanf("%c",&c);
    printf("Char %c ASCII %d\n", c, c);
    i = (int)c;
    if(i>=32 && i<=47)
        printf("Spec Sym");
    else if(i>=48 && i<=57)
        printf("Digit Sym");
    else if(i>=65 && i<=90)
        printf("Cap Alpha");
    else if(i>=91 && i<=96)
        printf("Spec Sym");
    else if(i>=97 && i<=122)
        printf("Small Alpha");
    else if(i>=123 && i<=127)
        printf("Spec Sym");
    
    return 0;
}