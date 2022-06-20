#include <iostream>
#include "swap.h"

using namespace std;

void reset(int &i)
{
  i = 0;
}

void swap11(int &i, int &j)
{
  int temp = i;
  i = j;
  j = temp;
}

int main()
{
  int a = 1, b = 2;
  cout << "a is " << a << "b is" << b << endl;
  swap11(a, b);
  cout << "a is " << a << "b is" << b << endl;
}