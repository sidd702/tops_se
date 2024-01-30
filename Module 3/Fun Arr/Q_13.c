/*
13.WAP to accept 5 numbers from user and check entered number is even or odd
using of array
*/
#include <stdio.h>
void checkEO(int []);
int main()
{
    int a[5],c=0;
    
    while(c<5){
        printf("ENter %d no: ",c+1);
        scanf("%d",&a[c]);
        ++c;
    };

    checkEO(a);
    return 0;
}

void checkEO(int a[5]){
    int i=0;
    for(i=0;i<5;i++){
        if(a[i]%2==0){
            printf("%d is Even\n",a[i]);
        }else{
            printf("%d is Odd\n",a[i]);
        }
    }
}