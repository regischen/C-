#include <iostream>
#include "fact.h"

using namespace std;

int abs(int n)
{
  if (n >= 0)
    return n;
  else
    return -n;
}

int main()
{
  int n = 0;
  cout << "please enter a number: " << endl;
  cin >> n;
  cout << "abs of " << n << " is " << abs(n) << endl;
}