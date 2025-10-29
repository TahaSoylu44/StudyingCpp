#include <iostream>

int main(){
    
    char grade;

    std::cout << "Enter your letter grade: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "You nailed it!" << std::endl;
        break;
    case 'B':
        std::cout << "You know it!" << std::endl;
        break;
    case 'C':
        std::cout << "Maybe it could be better :)" << std::endl;
        break;   
    case 'D':
        std::cout << "You should study more" << std::endl;
        break; 
    case 'F':
        std::cout << "You failed!" << std::endl;
        break;
    default:
        std::cout << "You have to type a letter grade" << std::endl;
        break;
    }
    
    return 0;
}