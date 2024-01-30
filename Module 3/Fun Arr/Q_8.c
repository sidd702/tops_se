/*
8. WAP to check that the string is palindrome or not
*/
void chekPal(char *,int);
#include <stdio.h>
int main()
{
    char str[50];
    int l,i,j;
    
    printf("Enter string ");
    scanf("%s", str);
    
    for (l = 0; str[l] != '\0'; ++l);
    //printf("\n%d",l);
    
    chekPal(str,l);
    
    return 0;
}

void chekPal(char str[50],int l){
    int i,j,flag=1;
        for(i=0,j=l-1;i<=(l/2)-1;i++,j--){
        if(str[i]==str[j]){
            continue;
        }else{
            flag = 0;
        }
        }
    if(flag==0){
        printf("Not palindrome");
    }else{
        printf("Palindrome");
    }
}