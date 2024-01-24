/*
19_2 Patterns
A
B C
D E F
*/
#include <stdio.h>

int main() {
    int j,i,a=65,c=4;
    
    //printf("Enter count ");
    //scanf("%d",c);
    
    for(i=1;i<=c;i++){
        for(j=1;j<=i;j++,a++){
            printf("%c ",a);
        }
        printf("\n");
    }
    
    return 0;
}