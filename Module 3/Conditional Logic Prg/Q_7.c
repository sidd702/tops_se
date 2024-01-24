/*
7. Accept marks from user and check pass or fail
*/
#include <stdio.h>

int main()
{
    int m;
    printf("Enter Marks ");
    scanf("%d",&m);
    if(m>0 && m<101){
        if(m>70){
            printf("Pass");
        }else{
            printf("Fail");
        }
    }else{
        printf("Invalid");
    }
    return 0;
}
