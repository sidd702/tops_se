/*
27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n
*/
#include <stdio.h>
int main()
{
    int i,num;
    float sum=0;
    printf("\nEnter count ");
    scanf("%d",&num);
    
    if(num>0){
        for(i=1;i<=num;i++){
            if(i%2 != 0){
                //printf("%f",i/(i+1));
                sum =sum + (float)(i/(i+1));
                printf("\ne%.2f",sum);
            }else{
                sum -= (i/(i+1));
                printf("\no%.2f",sum);
            }
        }
    }

    printf("\n%.2f",sum);
    return 0;
}
