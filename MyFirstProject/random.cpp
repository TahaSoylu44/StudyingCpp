#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));      //The Randomn Number Generator

    int num = rand() % 2;       //rand() -> Random number function

    if (num == 1)
    {
        std::cout << "HEADS";
    }
    else
    {
        std::cout << "TAILS";
    }
    
    return 0;
}