/*
29.Convert minutes into seconds and hours
*/
#include <stdio.h>
int main() {
    float h,s,m=0;

    printf("Enter Minutes ");
    scanf("%f",&m);
    printf("\nMins %f Hour %0.2f Sec %0.2f",m,m/60,m*60);
    return 0;
}