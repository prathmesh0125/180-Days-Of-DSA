#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int partitionArray(vector<int>& array, int a, int b) {
    int n = array.size();
    int left = 0, right = n - 1;

    // Partitioning the array
    for(int i=0;i<=right;i++){
            if(array[i] < a){
                swap(array[i],array[left]);
                left++;
            }else if(array[i] > b){
                swap(array[i],array[right]);
                right--;
                i--;
            }
    }
    return 1;
}

int main() {
    int n = 5;
    vector<int> A = {1, 2, 3, 3, 4};
    int a = 1, b = 2;

    // Modify the array
    int result = partitionArray(A, a, b);

    // Print the modified array
    cout << "Modified Array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    // Print the result
    cout << "\nOutput: " << result << endl;

    return 0;
}
