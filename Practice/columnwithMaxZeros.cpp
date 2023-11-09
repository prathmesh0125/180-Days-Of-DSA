#include <iostream>
using namespace std;

int CountMaxZeros(int arr[][3], int n) {
    int max = 0;
    int ans = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j][i] == 0) {
                count++;
            }
        }

        if (count > max) {
            max = count;
            ans = i;
        }
    }

    return ans;
}

int main() {
    int arr[3][3] = {{1, 0, 1}, {1, 0, 1}, {1, 0, 0}};
    int n = 3;
    int result = CountMaxZeros(arr, n);

    if (result != -1) {
        cout << "Column with the most zeros: " << result << endl;
    } else {
        cout << "No zeros found." << endl;
    }

    return 0;
}
