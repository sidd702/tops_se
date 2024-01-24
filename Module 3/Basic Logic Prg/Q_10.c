/*
10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
*/
#include <stdio.h>

int main() {
    float w,l,h;
    printf("w ");
    scanf("%f",&w);
    printf("l ");
    scanf("%f",&l);
    printf("h ");
    scanf("%f",&h);
    printf("Area %f",2*(w*l+h*l+h*w));
    return 0;
}