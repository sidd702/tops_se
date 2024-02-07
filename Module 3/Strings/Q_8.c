/*
8. Write a program in C to count the total number of vowels or consonants in a string.
*/
#include <stdio.h>
#define MAX_SIZE 50
int main()
{
    int l=0,vc=0,cc=0;
    char str[MAX_SIZE];

    printf("Enter String1: ");
    fgets(str, MAX_SIZE, stdin);

    for(l=0; str[l]!='\0'; ++l) {
        if((str[l] >= 'a' && str[l] <='z') ||
                (str[l]>='A' && str[l]<='Z')) {
            if(str[l]=='a' ||
                    str[l]=='e' ||
                    str[l]=='i' ||
                    str[l]=='o' ||
                    str[l]=='u' ||
                    str[l]=='A' ||
                    str[l]=='E' ||
                    str[l]=='I' ||
                    str[l]=='O' ||
                    str[l]=='U') {
                        vc++;
                        continue;
            }else{
                cc++;
            }
        }
    }
    printf("VC%d CC%d",vc,cc);
    
    return 0;
}