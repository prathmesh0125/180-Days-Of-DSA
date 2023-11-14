#include <iostream>
using namespace std;
bool areRotations(string s1, string s2)
{
    s1 += s1;
    int found = -1;
    found = s1.find(s2);
    if (found != -1)
        return 1;
    return 0;
}
int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "forgeeksgeeks";
    cout<<areRotations(s1,s2);
}
