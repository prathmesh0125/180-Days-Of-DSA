#include<iostream>
using namespace std;

int fib(int n){
    if (n <= 1) {
        return n; 
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int index = 5;  // Aap yahan koi bhi index set kar sakte hain.
    cout << "Fibonacci number at index " << index << " is: " << fib(index) << endl;
    
    return 0;
}
