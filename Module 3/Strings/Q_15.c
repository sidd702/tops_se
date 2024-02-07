/* 15. Write a program in C to find the largest and smallest words in a string.
*/
#include<stdio.h>
#include<string.h>
int main ()
{
    int l, i, rowInd = 0, colInd=0;
    int maxInd,minInd;
    int maxStrLen = 0, minStrLen=9999;
    char str[100], substr[100][100];

    printf ("ENter String ");
    scanf ("%[^\n]s", str);
    //printf ("%ld\n", strlen (str));

    for (l = 0; l < strlen (str); ++l) {
        if(str[l]!=' ') {
            substr[rowInd][colInd]=str[l];
            colInd++;
        } else {
            rowInd++;
            colInd=0;
        }
    }

    for (i = 0; i <= rowInd; i++) {
        //printf ("%s %d\n", substr[i],strlen(substr[i]));
        if(maxStrLen < strlen(substr[i])) {
            maxStrLen = strlen(substr[i]);
            maxInd = i;
        }else if(strlen(substr[i]) < minStrLen) {
            minStrLen = strlen(substr[i]);
            minInd = i;
        }
    }
    //printf("maxInd %d minInd %d\n",maxInd, minInd);
    printf("Largest Word %s, smallest word %s",substr[maxInd],substr[minInd]);
    return 0;
}