/*
13.calculate the Factorial of a Given Number using while loop
*/
#include <stdio.h>

int main()
{
    int n,fact=1,c;
    
    printf("Enter positive num to cal Factorial ");
    scanf("%d",&n);
    
    if(n>0){
        c=n;
        while(c!=0){
            fact*=c;
            --c;
        }
    }else{
        printf("Invalid");
    }
    
    printf("Factorial %d",fact);
    
    
    return 0;
}
