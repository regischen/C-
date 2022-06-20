#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
  vector<string> svec;
  string tmp;
  while (cin >> tmp)
  {
    for (auto &c : tmp)
    {
      c = toupper(c);
    }
    svec.push_back(tmp);
  }
  for (auto s : svec)
  {
    cout << s << endl;
  }
  return 0;
}