/*
25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
*/
#include <stdio.h>
int main()
{
    int num,sum=0,i;
    printf("\nEnter count ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        sum += (i*i);
    }

    printf("%d",sum);
    return 0;
}
