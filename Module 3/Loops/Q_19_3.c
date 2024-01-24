/*
19_3 Odd Patterns
    *
  * * *
* * * * *
*/
#include <stdio.h>

int main ()
{
  int i, j, rows = 9;

  for (int i = 1; i <= rows; i++)
    {
        if(i%2!=0){
          for (int j = rows - i; j > 1; j--){
    	  printf(" ");
    	    }
          for (int j = 1; j <= i; j++){
    	  printf("* ");
    	    }
          printf("\n");
        }
    }
}
