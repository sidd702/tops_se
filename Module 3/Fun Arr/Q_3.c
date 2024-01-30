/*
3. WAP to find reverse of string using recursion
*/
#include <stdio.h>
void rev(char[],int);
int main()
{
    int l;
    char str[20] = "Siddharth";
    
    for (l = 0; str[l] != '\0'; ++l);
    //printf("%d",l);
    
    rev(str,l);
    
    return 0;
}

void rev(char str[20],int l){
    if(l>=0){
        printf("%c",str[l]);
        --l;
        rev(str,l);
    }else{
        return;
    }
}
