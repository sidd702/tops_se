/*
26.Convert temperature Fahrenheit to Celsius
F = °C × (9/5) + 32
*/
#include <stdio.h>
int main() {
    float f =0;

    printf("Enter F ");
    scanf("%f",&f);
    printf("\nC = %f", ((f- 32)*9)/5);
    return 0;
}