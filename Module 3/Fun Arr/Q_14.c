/*
14. Perform 2D matrix array
*/
#include <stdio.h>

const int ROW = 4, COL = 5;

void add3by3Mat(int [ROW][COL]);
void show3by3Mat(int [ROW][COL]);

int main()
{
    int mat[ROW][COL];
    
    add3by3Mat(mat);
    
    show3by3Mat(mat);

    return 0;
}

void add3by3Mat(int mat[ROW][COL]){
    
    int i=0,j=0;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("\nENter %d COL %d ROW val: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void show3by3Mat(int mat[ROW][COL]){
    int i=0,j=0;
    printf("\n\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
