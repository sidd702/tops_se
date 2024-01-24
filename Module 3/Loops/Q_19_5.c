/*
19_5 Patterns
1
2 3
4 5 6
*/
#include <stdio.h>
int main (){
    int i,j,rows,num=1;
    printf("rows count ");
    scanf("%d",&rows);
    
    for(i=0;i<rows;i++){
        for(j=0;j<i;j++,num++){
            printf("%d ",num);
        }
        printf("\n");
    }
}