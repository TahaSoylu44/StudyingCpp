#include <iostream>
#include <cmath>

int main(){
    
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "###################### WELCOME MY NEW CALCULATOR ######################" << std::endl;
    std::cout << "Here is what you can do:" << std::endl;
    std::cout << "Press '+' to sum" << std::endl;
    std::cout << "Press '-' to extract" << std::endl;
    std::cout << "Press '*' to multiply" << std::endl;
    std::cout << "Press '/' to divide" << std::endl;
    std::cout << "Press '^' for exponential" << std::endl;
    std::cout << "Press 'M' for average" << std::endl;

    std::cout << "Please Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    std::cout << "What operation do you want to do: ";
    std::cin >> op;

    switch (op){
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '^':
        result = pow(num1,num2);
        break;
    case 'M':
        result = (num1 + num2) / 2;
        break;    
    default:
        std::cout << "You did not enter a valid operator." << std::endl;
        break;
    }

    std::cout << "The result is " << result << std::endl;

    return 0;
}
