#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Maxcoin(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int ans = 0;
    int n=arr.size();
    for (int i = n/ 3; i < n; i+=2) {
        ans += arr[i];
    }
    return ans;
}

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 1, 2, 3, 4};
    cout << Maxcoin(arr);
}
