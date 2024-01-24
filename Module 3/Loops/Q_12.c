/*
12. Program of Armstrong Number in C Using For Loop & While Loop
*/
#include <stdio.h>

int main()
{
    int count,c,n=153,temp=1,d=0,x,v;
    int sum=0;
    
    printf("Enter positive num to check Armstrong ");
    scanf("%d",&n);
    
    c=n;
    while(c!=0)  
       {  
           c=c/10;  
           count++;  
       }
    printf("Count %d\t",count);
    
    c=n;
    while(c!=0){
        d=c%10;
        printf("d %d\t",d);
        c/=10;
        
        v=d;
        for(x=count;x>1;x--){
            d=d*v;
        }
        printf("d %d\t",d);    
        sum+=d;
    }
    
    if(n==sum){
        printf(" %d is Armstrong",n);
    }else{
        printf(" %d is NOT Armstrong",n);
    }
    
    return 0;
}
