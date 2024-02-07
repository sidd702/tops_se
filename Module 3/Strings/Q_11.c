/* 11.Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa. */
#include <stdio.h>
#define SIZE 50
int main()
{
    int l;
    char str[SIZE];

    printf("Enter Str ");
    fgets(str,SIZE,stdin);
    
    for(l=0;str[l]!='\0';++l){
        if(str[l]>='a' && str[l]<='z'){
            str[l]-=32;
        }else if(str[l]>='A' && str[l]<='Z'){
            str[l]+=32;
        }
    }
    printf("%s",str);

    return 0;
}