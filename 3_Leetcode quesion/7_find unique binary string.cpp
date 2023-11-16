#include <iostream>
using namespace std;
string uniqueBinary(string s[],int n)
{
    string ans;
    for (int i = 0; i <n; i++)
    {
        if (s[i][i] == '0')
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }
    return ans;
}
int main()
{
    string s[3] = {"111","011","001"};
    cout << uniqueBinary(s,3);
}