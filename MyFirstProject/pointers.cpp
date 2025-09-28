#include <iostream>

int main(){

    int mynum = 44;

    int* pMynum = nullptr;

    pMynum = &mynum;

    std::cout << &mynum << std::endl;
    std::cout << pMynum << std::endl;
}