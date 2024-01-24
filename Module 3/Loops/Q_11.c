/*
11. Accept 5 names from user at run time
*/
#include <stdio.h>

int main() {
    int i,n=5;
    char name[5][10];
    
    for(i=0;i<5;i++){
        printf("Enter %d name ",i+1);
        scanf("%s",&name[i][0]);
    }
    for(i=0;i<5;i++){
        printf("%d %s \n",i,name[i]);
    }
    
    return 0;
}