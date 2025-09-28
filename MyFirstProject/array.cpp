#include <iostream>

//double average(double numbers[], int size);

int main(){
    
    //Array = a data structure that can hold multiple values.
    //        Values are accesed by an index number.
    //        Kind of like a variable that holds multiple values.

    //sizeof() -> determines the size in bytes of a
    //            variable, data type, class, objects, etc.

    double numbers[5];

    for (double number : numbers)
    {
        std::cout << number << std::endl;
    }
    

}