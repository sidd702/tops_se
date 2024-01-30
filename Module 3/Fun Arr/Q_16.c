/*
16.Accept 5 numbers from user and perform sum of array
*/
#include <stdio.h>
int sum(int []);
int main()
{
    int arr[5];
    int i;

    for(i=0; i<5; ++i) {
        printf("Enter %d val ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d",sum(arr));
    
    return 0;
}
int sum(int arr[5])
{
    int i,j,sum=0;
    for(i=0; i<5; ++i) {
        sum+=arr[i];
    }
    return sum;
}