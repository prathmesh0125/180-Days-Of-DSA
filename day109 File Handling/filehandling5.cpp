#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Replace "your_file.txt" with the actual file path
    const std::string file_path = "your_file.txt";
    
    // Open the file for reading
    std::ifstream file(file_path);

    // Check if the file is open
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    // Read and print each line from the file
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    file.close();

    return 0;
}
