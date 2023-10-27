#include <iostream>

int main() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << num++;
        }
        num -= i - 1;
        std::cout << std::endl;
    }

    return 0;
}
#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) { // Generate 5 lines in the pattern
        int digit = i;
        for (int j = 1; j <= i; j++) {
            std::cout << digit;
            digit = (digit + 1) % 10; // Increment and wrap around to 0 if it reaches 10
        }
        std::cout << std::endl; // Move to the next line
    }

    return 0;
}
#include <iostream>

int main() {
    int n = 1; // Initialize the first number in the pattern

    for (int i = 0; i < 5; i++) { // Generate 5 numbers in the pattern
        for (int j = 0; j <= i; j++) {
            std::cout << n++; // Print the current number and increment it
        }
        std::cout << std::endl; // Move to the next line
    }

    return 0;
}