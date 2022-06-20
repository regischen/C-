#include <iostream>
#include "fact.h"

using namespace std;

int fact(int n)
{
  if (n == 1)
    return 1;
  else
    return n * fact(n - 1);
}

int main()
{
  int n = 0;
  cout << "please enter a number: " << endl;
  cin >> n;
  cout << "factory of " << n << " is " << fact(n) << endl;
}