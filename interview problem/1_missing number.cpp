#include<iostream>
using namespace std;

int missingNumber(int arr[], int size) {
    int sum1 = 0;
    for (int i = 0; i < size; i++) {
        sum1 = sum1 + arr[i];
    }
    int sum2 = size * (size + 1) / 2;
    int diff = sum2 - sum1;

    return diff;
}

int main() {
    int arr[3] = {3, 0, 1};
    cout << missingNumber(arr, 3);
    return 0;
}
