/*
12. WAP to accept 5 students name and store it in array
*/
#include <stdio.h>
void addArr(char [5][10]);
void printArr(char [5][10]);
int main()
{
    char stNam[5][10];
    addArr(stNam);
    printArr(stNam);

    return 0;
}
void addArr(char arr[5][10]){
    int i=0;
    for(i=0;i<5;i++){
        printf("Enter %d students name \n",i+1);
        scanf("%s",&arr[i]);
    }
}

void printArr(char arr[5][10]){
    int i=0;
    printf("\n\n");
    for(i=0;i<5;i++){
        printf("%s\n",arr[i]);
    }
}
