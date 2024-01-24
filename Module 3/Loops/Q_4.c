/* 4 WAP to print table up to given numbers
*/
#include <stdio.h>

int main() {
    int i,c,n;
    printf("Give num for table ");
    scanf("%d",&i);
    
    if(i>0){
        for(c=1;c<=i;c++){
            for(n=1;n<11;n++){
                printf("%d * %d = %d\n",c,n,c*n);
            }
            printf("\n");
        }
    }else printf("Invalid");

    return 0;
}