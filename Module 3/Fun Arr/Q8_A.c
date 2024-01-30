/*
Q 8_1  Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address and age
*/
#include <stdio.h>

struct empDt{
    int eno,eage;
    char ename[10],eadd[20];
};
int main()
{
    int i;
    struct empDt e[5];
    
    for(i=0;i<2;i++){
        printf("employee %d ",i+1);
        printf("\nEnter eid ");
        scanf("%d",&e[i].eno);
        printf("\nEnter ename ");
        scanf("%s", e[i].ename);
        printf("\nEnter age ");
        scanf("%d", &e[i].eage);
        printf("\n\nEnter eadd ");
        scanf("%s", e[i].eadd);
    }
    
    for(i=0;i<2;i++){
        printf("\nemployee %d ",i+1);
        printf("\tEid %d",e[i].eno);
        printf("\tEname %s",e[i].ename);
        printf("\tEage %d",e[i].eage);
        printf("\tEAdd %s",e[i].eadd);
    }
    
    return 0;
}
