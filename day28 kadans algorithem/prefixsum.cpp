#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void prefixsum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i]; // Add elements to the prefix vector
    }

    print(prefix);
}

int main()
{
    vector<int> v = {6, 4, 5, -3, 2, 8};
    prefixsum(v);
}
