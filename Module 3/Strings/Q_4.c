/*
4. Write a program in C to count the total number of words in a string.
*/
#include <stdio.h>

int main()
{
    int l=0,wc=0;
    char str[50];
    printf("Enter String: ");
    fgets(str, 50, stdin);

    for(l=0; str[l]!='\0'; ++l){
        if(str[l]!= ' '){
            continue;
        }else{
            wc++;
        }
    }
    wc++;

    printf(" WC %d",wc);

    return 0;
}