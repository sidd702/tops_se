/*
3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/
#include <stdio.h>
int main() {
    int i[10],c,ec,oc,es,os=0;
    for(c=0;c<10;c++){
        printf("Enter value ");
        scanf("%d",&i[c]);
        
        if(i[c]%2==0){
            ec++;
            es+=i[c];
        }else{
            oc++;
            os+=i[c];
        }
    }
    printf("#odd %d #even %d #sumeven %d #sumodd %d",oc,ec,es,os);
    
    return 0; 
}