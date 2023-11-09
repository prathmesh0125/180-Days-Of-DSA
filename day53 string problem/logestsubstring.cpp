#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int longestPalindrome(string s)
{
    vector<int> lower(26, 0), upper(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
        {
            lower[s[i] - 'a']++;
        }
        else if (s[i] >= 'A')
        {
            upper[s[i] - 'A']++;
        }
    }
    int ans = 0;
    bool odd = 0;
    for (int i = 0; i < 26; i++)
    {
        // for lowercase;
        if (lower[i] % 2 == 0)
        {
            ans += lower[i];
        }
        // for uppercase
        else
        {
            ans += lower[i] - 1;
            odd = 1;
        }
        if (upper[i] % 2 == 0)
        {
            ans += upper[i];
        }
        else
        {
            ans += upper[i] - 1;
            odd = 1;
        }
    }
    return ans + odd;
}

int main(){
    string s = "abccccdd";
    cout<<longestPalindrome(s);
}