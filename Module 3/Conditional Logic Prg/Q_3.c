/*
3 WAP to check if the given year is a leap year or not.
*/
#include <stdio.h>
int main() {
    int y;
    printf("Enter year ");
    scanf("%d",&y);
    if(y>0 && y%4==0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return 0;
}