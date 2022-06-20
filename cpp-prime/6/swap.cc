#include "swap.h"

void my_swap(int *i, int *j)
{
  int temp = *i;
  *i = *j;
  *j = temp;
}