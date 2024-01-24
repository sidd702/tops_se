/*
20. WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50
*/
#include <stdio.h>
int main (){
    int num=1;
    for(num=1;num<51;num++){
        if(num%10==0){
            printf("\n");
        }else{
            num<10 ? printf("0%d ",num) : printf("%d ",num);
        }
    }
}