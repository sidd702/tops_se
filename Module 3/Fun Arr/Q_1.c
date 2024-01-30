/*
1. Write a program to find out the max number from given array using function
*/
#include <stdio.h>

int main()
{
    int a[5] = {1,2,8,4,5};
    int i,max=0;
    
    for(i=0;i<5;i++){
        max = a[i] > max ? a[i] : max; 
    }
    printf("MAx is %d",max);
    return 0;
}
