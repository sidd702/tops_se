/* 12.Write a program in C to find the number of times a given word 'is' appears in
the given string. */
#include <stdio.h>
#define SIZE 50
int main ()
{
    int l, count = 0, flag = 0, i;
    char str[SIZE], word[SIZE];

    printf ("Enter Str ");
    scanf ("%[^\n]%*c", str);
    printf ("Enter word ");
    scanf ("%[^\n]%*c", word);

    for (l = 0; str[l] != '\0'; ++l) {
        if (word[0] == str[l]) {
            for (i = 1, flag = 0; word[i] != '\0'; ++i) {
                if (word[i] == str[l + i]) {
                    flag = 1;
                } else {
                    flag = 0;
                }
            }
            if (flag == 1) {
                count++;
            }
        }
    }

    printf ("%s is appeared %d time(s).", word, count);

    return 0;
}