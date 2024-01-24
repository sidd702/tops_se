/*
12. Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?
*/
#include <stdio.h>

int main() {
    int a;
    printf("No of Students ");
    scanf("%d",&a);
    printf("Total Apple Req %d",a*5);
    return 0;
}