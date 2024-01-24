/*
18. Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
*/
#include <stdio.h>

int main() {
    int i,c,n;
    printf("Give num for table ");
    scanf("%d",&i);
    
    if(i>0){
        for(n=1;n<11;n++){
            printf("%d * %d = %d\n",i,n,i*n);
        }
        printf("\n");
    }else printf("Invalid");

    return 0;
}