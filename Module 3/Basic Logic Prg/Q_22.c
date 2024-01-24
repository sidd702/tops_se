/*
22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P
*/
#include <stdio.h>
int main() {
    int t;
    float r=5.5,p;
    printf("Enter Amt ");
    scanf("%f",&p);
    printf("Enter ROI ");
    scanf("%f",&r);
   printf("Enter Months ");
    scanf("%d",&t);
    printf("Cmp Int of %f Amt is %f",p,p*(1+(r/100)*t)); 
    return 0; 
}