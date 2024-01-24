/*
24.Accept 5 employees name and salary and count average and total salary
*/
#include <stdio.h>
int main() {
    int i,c = 0;
    char empName[5][10];
    float tSal =0,aSal=0,sal[5];
    
    while(c<5){
        printf("Enter Emp Name ");
        scanf("%s",&empName[c][0]);
        printf("Enter Emp Sal ");
        scanf("%f",&sal[c]);
        c++;
    }

    for (i = 0; i < 5; i++) {
        printf("%s\t %f\n", empName[i],sal[i]);
        tSal+=sal[i];
    }
    aSal=tSal/5;
    printf("Total Sal %f Avg Sal %f",tSal,aSal);
    return 0;
}