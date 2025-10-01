#include <iostream>

/**
 * @brief square the given number
 * 
 * @param x int
 */
void square(int &x);

int main(){
    
    int number = 3;

    square(number);

    std::cout << number << std::endl;
    
    return 0;
}

void square(int &x){
    x = x * x;
}