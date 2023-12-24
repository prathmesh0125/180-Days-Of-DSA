#include <iostream>
using namespace std;
int MinimumChanges(string s)
{
  int altercount0 = 0;
  int altercount1 = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (i % 2 == 0)
    {
      if (s[i] == '0')
      {
        altercount0++;
      }
      else
      {
        altercount1++;
      }
    }
  else
  {

    if (s[i] == '1')
    {
      altercount1++;
    }
    else
    {
      altercount0++;
    }
  }
  }

  return min(altercount0, altercount1);
}

int main()
{
  string b = "0100";
  cout << MinimumChanges(b);
}