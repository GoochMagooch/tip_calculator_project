#include <iostream>
#include <string>
#include <iomanip>

int main() {
    double total, tipPercentage;
    
    std::cout << "Enter your total: ";
    std::cin >> total;
    std::cout << "Enter your tip percentage: ";
    std::cin >> tipPercentage;
    double tip = total * tipPercentage / 100;

    std::cout << "Your tip will be: $" << std::fixed << std::setprecision(2) << tip << std::endl;
    std::cout << "Your overall total will be: $" << std::fixed << std::setprecision(2) << total + tip << std::endl;

    return 0;
}