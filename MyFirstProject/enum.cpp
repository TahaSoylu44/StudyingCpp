#include <iostream>

enum Car {Mustang = 2023, Corvette = 2001, Corolla = 2018, Peugeot = 2011};

int main() {
    
    // enums = a user-defined data type that consists 
    //         of paired named-integer constants.
    //         GREAT if you have a set of potential options
    //If we have to memorize what a number wants to mean,we can use "enum"

    Car car = Mustang;

    switch(Mustang){
        case 2023:
            std::cout << "The year is 2023" << std::endl;
            break;

        case 2001:
            std::cout << "The year is 2023" << std::endl;
            break;
        
        case 2018:
            std::cout << "The year is 2023" << std::endl;
            break;

        case 2011:
            std::cout << "The year is 2023" << std::endl;
            break;

        default:
            std::cout << "We do not know the year" << std::endl;
    }


    return 0;
}