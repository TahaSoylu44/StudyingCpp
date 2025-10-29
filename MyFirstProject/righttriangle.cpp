#include <iostream>
#include <cmath>

int main(){
    double height;
    double base;
    
    std::cout << "Enter the height value: ";
    std::cin >> height;

    std::cout << "Enter the base value: ";
    std::cin >> base;

    double hypo = std::sqrt(height * height + base * base);

    std::cout << "The hypotenus is " << hypo << std::endl;
    
    return 0;
}