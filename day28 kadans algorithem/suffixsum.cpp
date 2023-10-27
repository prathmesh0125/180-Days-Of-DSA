#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

void suffixSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> suffix(n);

    suffix[n - 1] = arr[n - 1]; // Initialize the last element of the suffix vector

    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i]; // Calculate the suffix sum
    }

    print(suffix);
}

int main() {
    vector<int> v = {6, 4, 5, -3, 2, 8};
    suffixSum(v);
}
