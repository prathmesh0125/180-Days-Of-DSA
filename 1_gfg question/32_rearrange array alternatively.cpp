#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

void RearrangeAlternatively(int arr[], int n) {
    vector<int> v(n);
    int even = 0;
    int odd = 1;
    int i = 0;

    while (even < n) {
        v[even] = arr[n - 1 - i];
        even += 2;
        i++;
    }
    i = 0;
    while (odd < n) {
        v[odd] = arr[i];
        odd += 2;
        i++;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = v[i];
    }
    print(v);
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    RearrangeAlternatively(arr, 6);

    return 0;
}
