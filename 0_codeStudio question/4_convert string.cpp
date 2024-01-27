#include <iostream>
#include <sstream>
using namespace std;
string convertStr(string str)
{
  for (int i = 0; i < str.length(); i++)
    if (i == 0 || str[i - 1] == ' ')
    {
      str[i] = toupper(str[i]);
    }
  return str;
}

int main()
{
  string s = "i love programing";
  cout << convertStr(s);
}