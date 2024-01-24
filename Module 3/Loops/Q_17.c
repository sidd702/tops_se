/*
17. Calculate 5 numbers from user and calculate number of even and odd using of while loop
*/
#include <stdio.h>

int main() {
    int n,c=1,ec=0,oc=0;
    
    do{
        printf("\nEnter %d num ",c);
        scanf("%d",&n);
        
        n%2==0 ? ec++ : oc++;
        c++;
    }while(c<6);
    
    printf("EC %d OC %d",ec,oc);
    return 0;
}