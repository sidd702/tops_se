/* 37. WAP to show
i. Monday to Sunday using switch case
*/
#include <stdio.h>

int
main ()
{
  int d = 0;
  printf ("Enter day ");
  scanf ("%d", &d);
  switch (d)
    {
    case 1:
      printf ("Monday");
      break;
    case 2:
      printf ("Tuesday");
      break;
    case 3:
      printf ("Wednesday");
      break;
    case 4:
      printf ("Thursday");
      break;
    case 5:
      printf ("Friday");
      break;
    case 6:
      printf ("Saturday");
      break;
    case 7:
      printf ("Sunday");
      break;
    }
  return 0;
}