#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
  vector<int> ivec;
  int temp = 0;
  while (cin >> temp)
  {
    ivec.push_back(temp);
  }

  if (ivec.size() > 0)
  {
    cout << "----------------" << endl;
    for (decltype(ivec.size()) i = 0, j = ivec.size() - 1; i <= j; ++i, --j)
    {
      cout << ivec[i] + ivec[j] << endl;
    }
  }

  return 0;
}