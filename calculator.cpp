#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, world!\n";

    int tip = 35;
    std::cout << "Enter your tip: ";
    std::cin >> tip;
    std::cout << "Your tip is: " << tip << std::endl;
    return 0;
}