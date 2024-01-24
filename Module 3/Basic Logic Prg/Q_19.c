/*
19.Calculate compound interest
CI = P(1 + r/n)- P
n is frequency or no. of  times the interest is compounded annually
t is the overall tenure
*/
#include <stdio.h>
#include <math.h>
int main() {
    int n=1,m;
    float r=5.5,s;
    printf("Enter Amt ");
    scanf("%f",&s);
    printf("Enter Months ");
    scanf("%d",&m);
    printf("Cmp Int of %d Months is %f",m,s*(1+(r/n))-s); 
    return 0; 
}