#include <iostream>
#include <vector>
using namespace std;

void findbit(vector<string> &ans, int n, string &temp, int zero, int one)
{
  if (temp.size() == n)
  {
    ans.push_back(temp);
    return;
  }
  temp.push_back('1');
  findbit(ans, n, temp, zero, one + 1);
  temp.pop_back();

  if (zero < one)
  {
    temp.push_back('0');
    findbit(ans, n, temp, zero + 1, one);
    temp.pop_back();
  }
}

int main()
{
  int n = 3;
  int zero = 0;
  int one = 0;
  vector<string>ans;
  string temp;
  findbit(ans, n, temp, zero, one);

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}