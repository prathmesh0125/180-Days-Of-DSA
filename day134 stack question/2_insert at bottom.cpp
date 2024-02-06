#include <iostream>
#include <stack>

using namespace std;

stack<int> insertAtBottom(stack<int> St, int X) {
    stack<int> temp;
    
    // Move elements from St to temp
    while (!St.empty()) {
        temp.push(St.top());
        St.pop();
    }
    
    // Push X to St
    St.push(X);
    
    // Move elements back from temp to St
    while (!temp.empty()) {
        St.push(temp.top());
        temp.pop();
    }
    
    return St;
}

int main() {
    // Example usage
    stack<int> originalStack;
    
    // Push some elements to the original stack
    originalStack.push(1);
    originalStack.push(2);
    originalStack.push(3);
    
    // Call insertAtBottom to insert a new element at the bottom
    originalStack = insertAtBottom(originalStack, 4);
    
    // Print the modified stack
    while (!originalStack.empty()) {
        cout << originalStack.top() << " ";
        originalStack.pop();
    }
    
    return 0;
}
