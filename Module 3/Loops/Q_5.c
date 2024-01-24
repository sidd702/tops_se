/*
5. WAP to print factorial of given number
*/
#include <stdio.h>

int main() {
    int c,i;
    int fact=1;
    printf("Give num ");
    scanf("%d",&i);
    
    if(i>0){
        for(c=i;c>0;c--){
            fact*=c;
        }
        printf("Fact %d",fact);
    }else{
        printf("Invalid");
    }
    return 0;
}