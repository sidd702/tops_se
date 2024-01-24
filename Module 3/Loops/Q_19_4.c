/*
19_4 Patterns
*
* *
* * *
* *
*
*/
#include <stdio.h>
int main (){
    int i,j,rows;
    printf("rows count ");
    scanf("%d",&rows);

    if(rows%2==0){
        rows++;
    }
    
    for(i=1;i<=rows/2;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=rows/2-1;i>0;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}