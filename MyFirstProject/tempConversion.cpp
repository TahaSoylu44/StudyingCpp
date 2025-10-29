#include <iostream>

int main(){


    std::cout << "############## Welcome My New Temperature Type Converison Program ##############" << std::endl;
    std::cout << "Celcius: C" << std::endl;
    std::cout << "Fahrenheit: F" << std::endl;
    std::cout << "Kelvin: K" << std::endl;
    
    char tempType;
    char toTempType;
    double temp;
    double newTemp;

    std::cout << "Enter your temperature type: ";
    std::cin >> tempType;

    std::cout << "Enter your temperature: ";
    std::cin >> temp;

    std::cout << "What type temperature do you want?: ";
    std::cin >> toTempType;

    switch (tempType)
    {
    case 'C':
        switch (toTempType)
        {
        case 'C':
            newTemp = temp;
            break;

        case 'K':
            newTemp = temp + 273;
            break;

        case 'F':
            newTemp = temp * 1.8 + 32;
            break;
        
        default:
            std::cout << "The type of the wanted temperature was entered wrong!" << std::endl;
            break;
        }
        break;
    
    case 'K':
        switch (toTempType)
        {
        case 'C':
            newTemp = temp - 273;
            break;

        case 'K':
            newTemp = temp;
            break;

        case 'F':
            newTemp = (temp - 273) * 1.8 + 32;
            break;
        
        default:
            std::cout << "The type of the wanted temperature was entered wrong!" << std::endl;
            break;
        }
        break;

    case 'F':
        switch (toTempType)
        {
        case 'C':
            newTemp = (temp - 32) / 1.8;
            break;

        case 'K':
            newTemp = ((temp - 32) / 1.8) + 273;
            break;

        case 'F':
            newTemp = temp;
            break;
        
        default:
            std::cout << "The type of the wanted temperature was entered wrong!" << std::endl;
            break;
        }
        break;
    
    default:
        std::cout << "The type of the temperature was entered wrong!" << std::endl;
        break;
    }

    std::cout << "The new temperature is " << newTemp << std::endl;

    return 0;
}