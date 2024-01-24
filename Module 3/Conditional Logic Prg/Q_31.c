/*31 Write a program in C to read any Month Number in integer and display the
number of days for this month.
*/
#include <stdio.h>
int main() {
    int m;
    printf("Enter m ");
    scanf("%d",&m);
    if(m>12)
        printf("Invalid");
    else if(m%2==0){
        printf("30 Days");
    }else
        printf("31 Days");
    
    return 0;
}