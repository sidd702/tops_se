/*
10. WAP to perform Palindrome number using for loop and function
*/

#include <stdio.h>
void chkPalin(int);
int main (){
    int c=1,n;
    do{
        printf("\nEnter %d num ",c);
        scanf("%d",&n);
        
        chkPalin(n);
        c++;
    }while(c<2);
}

void chkPalin(int n){
    int rev=0,rem=0,origional;
    origional=n;
    while(origional!=0){
        rem = origional % 10;
        //printf("\nrem %d",rem);
        rev = rev * 10 + rem;
        //printf("\nrev %d",rev);
        origional /= 10;
    }
    
    if(n == rev){
        printf("%d is palindrome",n);
    }else{
        printf("%d is NOT palindrome",n);
    }
}