/*
20. Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary
*/
#include <stdio.h>
#include <math.h>
int main() {
    float s;
    printf("Enter Sal ");
    scanf("%f",&s);
    printf("Salary after ins pre %f\n",s=s-s/10);
    printf("Salary after loan pre %f",s=s-s/10);
    return 0; 
}