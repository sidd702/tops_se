/* 33. WAP to input the week number and print week day
*/
#include <stdio.h>
int main() {
    int d;
    char * w = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    printf("Enter Day ");
    scanf("%d",&d);
    if(d>0 && d<=7){
        printf("%s",w[d-1]);
    }else
        printf("Invalid");
    return 0;
}