/* 35. Accept the input month number and print number of days in that month.
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