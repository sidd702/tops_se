/*
16.Convert country’s name in abbreviate form
*/
#include <stdio.h>
int main() {
    char c[30];
    printf("Enter Name ");
    scanf("%s",&c);
    printf("Country %c%c",c[0],c[1]); 
    return 0; 
}