/******************************************************************************
4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement

*******************************************************************************/
#include <stdio.h>
int main ()
{
  int op = 1;
  float v1, v2, res;
  printf ("Val1 ");
  scanf ("%f", &v1);
  printf ("Val2 ");
  scanf ("%f", &v2);
  printf ("1Add 2Sub 3Mul 4Div 5mod ");
  scanf ("%d", &op);
  if (op == 1)
    res = v1 + v2;
  if (op == 2)
    res = v1 - v2;
  if (op == 3)
    res = v1 * v2;
  if (op == 4)
    res = v1 / v2;
  printf ("Result %f", res);
  return 0;
}
