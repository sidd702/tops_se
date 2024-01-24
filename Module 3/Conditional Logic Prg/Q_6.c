/*
6. Find the Character Is Vowel or Not
*/
#include <stdio.h>
int main() {
    int i = 0;
    char c,v[5]={'a','e','i','o','u'};
    printf("Enter char ");
    scanf("%c",&c);
    while(i < 5){
        if(c==v[i]){
            printf("Vowel");
            break;
        }else{
            i++;
        }
    }
    if(i==5)
        printf("Not Vowel");

    return 0;
}