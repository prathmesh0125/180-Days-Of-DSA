#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n) {
    // Create a vector to store the result initialized with -1
    vector<long long> ans(n, -1);
    
    // Create a stack to store the indices of elements from the input array
    stack<int> st;
    
    // Iterate through the input array
    for(int i = 0; i < n; i++) {
        // While the stack is not empty and the current element is greater than the element at the top of the stack
        while (!st.empty() && arr[st.top()] < arr[i]) {
            // Update the result for the element at the index at the top of the stack
            ans[st.top()] = arr[i];
            // Pop the index from the stack since its next larger element has been found
            st.pop();
        }
        // Push the current index onto the stack
        st.push(i);
    }
    
    // Return the vector containing the next larger elements
    return ans;
}

int main() {
    // Test the nextLargerElement function
    vector<long long> arr = {1, 3, 2, 4};
    int n = arr.size();
    
    vector<long long> result = nextLargerElement(arr, n);
    
    // Output the result
    cout << "Next larger elements: ";
    for (long long num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
