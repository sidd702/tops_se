/*
14.Accept 5 numbers from user and find those numbers factorials
*/
#include <stdio.h>

int main()
{
    int c,n,fact=1,x=1;
    
    do{
        printf("\nEnter %d num ",x);
        scanf("%d",&n);
        
        if(n>0){
            x++;
            c=n;
            fact=1;
            while(c!=0){
                fact*=c;
                --c;
            }
            printf("\nFactorial %d",fact);
        }else{
            printf("\nInvalid");
        }
        
    }while(x<6);
    
    return 0;
}
