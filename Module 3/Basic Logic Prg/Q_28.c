/*
28.Convert years into days and months
*/
#include <stdio.h>
int main() {
    int y,d,m=0;

    printf("Enter Years ");
    scanf("%d",&y);
    
    printf("\nYears %d Days %d Months %d",y,y*12,y*12*30);
    return 0;
}