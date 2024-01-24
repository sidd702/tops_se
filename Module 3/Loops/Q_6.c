/*
6. WAP to print Fibonacci series up to given numbers
*/
#include <stdio.h>

int main() {
    int t1,t2,nt,c,i;
    
    printf("Enter count ");
    scanf("%d",&c);
    
    t1=0;
    t2=1;
    nt=t1+t2;
    
    if(c<=0){
        printf("Invalid");
        return 0;
    }
    if(c==1){
        printf("%d ",t1);
        return 0;
    }if(c==2){
        printf("%d %d ",t1,t2);
        return 0;
    }
    printf("%d %d ",t1,t2);
    for(i=3;i<=c;++i){
        printf("%d ",nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
    
    return 0;
}