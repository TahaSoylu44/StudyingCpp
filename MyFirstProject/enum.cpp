#include <iostream>

enum Car {Mustang, Corvette, Corolla, Peugeot};

int main() {
    
    // enums = a user-defined data type that consists 
    //         of paired named-integer constants.
    //         GREAT if you have a set of potential options
    //If we have to memorize what a number wants to mean,we can use "enum"

    Car car = Mustang;

    switch(Mustang){
        case 0:
            std::cout << "The year is 0" << std::endl;
            break;

        case 1:
            std::cout << "The year is 1" << std::endl;
            break;
        
        case 2:
            std::cout << "The year is 2" << std::endl;
            break;

        case 3:
            std::cout << "The year is 3" << std::endl;
            break;

        default:
            std::cout << "We do not know the year" << std::endl;
    }

    return 0;
}