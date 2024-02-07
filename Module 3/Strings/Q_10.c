/*10. Write a program in C to extract a substring from a given string
*/
#include <stdio.h>
#define MAX_SIZE 50
int main()
{
    int l=0,s=0,e=0,i,count=0;
    char str[MAX_SIZE], subStr[MAX_SIZE];

    printf("Enter String1: ");
    fgets(str, MAX_SIZE, stdin);

    printf("\nenter start of substr ");
    scanf("%d",&s);
    printf("\nenter end of substr ");
    scanf("%d",&e);

    for(l=0; str[l]!='\0'; ++l);

    if(s>0) {
        --s;
    }

    if((s>=0 && s<=l) &&
            (e<=l && e>=s)) {
        for(count=0,i=s; i<=e; i++,count++) {
            subStr[count] = str[i];
        }
        subStr[count] = '\0';
        printf("\nStr %s SubStr %s",str, subStr);
    } else {
        printf("Invalid SubStr Parameters");
    }

    return 0;
}