/*
25.Accept 5 expense from user and find average of expense
*/
#include <stdio.h>
int main() {
    int i,c = 1;
    float tExp =0,aExp=0,exp[5];
    
    while(c<6){
        printf("Enter %d User exp ",c);
        scanf("%f",&exp[c]);
        tExp+=exp[c];
        c++;
    }
    aExp=tExp/5;
    printf("Total exp %f Avg exp %f",tExp,aExp);
    return 0;
}