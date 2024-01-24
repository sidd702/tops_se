/*
26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
*/
#include <stdio.h>
int main()
{
    int num,tsum=0,sum=0,i,j;
    printf("\nEnter count ");
    scanf("%d",&num);
    
    for(i=num;i>0;i--){
        for(j=1;j<=i;j++){
            tsum+=j;
        }
    }

    printf("%d",tsum);
    return 0;
}
