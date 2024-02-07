/*
5. Write a program in C to compare two strings without using string library functions.
*/
#include <stdio.h>
#define MAX_SIZE 50
int main()
{
    int l=0,flag=0;
    char str1[MAX_SIZE],str2[MAX_SIZE];
    printf("Enter String1: ");
    fgets(str1, MAX_SIZE, stdin);
    printf("\nEnter String1: ");
    fgets(str2, MAX_SIZE, stdin);

    for(l=0; str1[l]!='\0'; ++l) {
        if(str1[l] == str2[l]) {
            flag=1;
            continue;
        } else {
            flag=0;
            break;
        }
    }
    
    if(flag){
        printf("Equal");
    }else{
        printf("Not Equal");
    }

    return 0;
}