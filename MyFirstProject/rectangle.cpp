#include <iostream>

int main(){
    
    int base;
    int height;
    char symbol;

    std::cout << "Enter the height: ";
    std::cin >> height;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the symbol: ";
    std::cin >> symbol;

    for (int i = 0; i < height; i++)
    {
        for (int i = 0; i < base; i++)
        {
            std::cout << symbol << ' ';
        }

        std::cout << '\n';
        
    }
    
    return 0;
}