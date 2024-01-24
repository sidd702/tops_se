/*
28. 1 2 3 6 9 18 27 54...
Nth term = [2 * (N-1)th term], if N is even
           [3/2 * (N-1)th term], if N is odd
*/
#include <stdio.h>

int main()
{
    int i,n,prev;
    printf("\nEnter count ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid");
    }
    
    for(i=1;i<=n;i++){
        if(i==1){
        printf("1 ");
        prev=1;
        continue;
        }
        if(i%2==0){
            printf("%d ",2 * prev);
            prev *= 2;
        }else{
            printf("%d ",3 * (prev / 2));
            prev = 3 * (prev / 2);
        }
    }

    return 0;
}
