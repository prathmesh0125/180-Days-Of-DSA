#include <iostream>
#include <string>
#include <cctype> // For tolower function

bool isPalindrome(const std::string& str) {
    // Create a lowercase version of the string for case-insensitive comparison
    std::string lowerStr = str;
    for (char& c : lowerStr) {
        c = tolower(c);
    }

    int start = 0;
    int end = lowerStr.length() - 1;

    while (start < end) {
        if (lowerStr[start] != lowerStr[end]) {
            return false; // Characters at the corresponding positions do not match
        }
        start++;
        end--;
    }

    return true; // All characters matched, it's a palindrome
}

int main() {
    std::string input;

    // Taking input from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Checking if the input is a palindrome
    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}
