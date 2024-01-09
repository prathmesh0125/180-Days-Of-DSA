#include <iostream>
using namespace std;

char MaximumOccChar(string str) {
    int arr[26] = {0};

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        int number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}

int main() {
    string str = "testsample";
    char ans = MaximumOccChar(str);
    cout << ans;
    return 0;
}
