/*
30. WAP to convert years into days and days into years
*/
#include <stdio.h>
int main() {
    float y,d;

    printf("Enter Years ");
    scanf("%f",&y);
    printf("Years %f Days %f",y,y*365);
    
    printf("\nEnter Days ");
    scanf("%f",&d);
    printf("Days %f Years %.2f",d,d/365);
    return 0;
}