/*
11.WAP to accept 5 numbers from user and display in reverse order using for
loop and array
*/

#include <stdio.h>
int rev(int);
void printArr(int []);
int main (){
    int arr[5],c=0;
    do{
        printf("\nEnter %d num ",c+1);
        scanf("%d",&arr[c]);
        
        arr[c] = rev(arr[c]);
        c++;
    }while(c<5);
    
    printArr(arr);
}

void printArr(int arr[5]){
    int i =0;
    for(i= 0;i<5;i++){
        printf("\n%d",arr[i]);
    }
}

int rev(int origional){
    int n,rem=0,rev=0;
    for(n=origional;n!=0;n/=10){
        rem = n % 10;
        rev = rev * 10 + rem;
        //printf("\nrev %d",rev);
    }
    
    return rev;
}