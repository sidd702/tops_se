/*
8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.
*/
#include <stdio.h>
int main() {
    int h = 0;
    printf("Enter height ");
    scanf("%d",&h);
    if(h>180)
        printf("Tall");
    else if(h<=0)
        printf("Invalid");
    else
        printf("Short");
    return 0;
}