#include <iostream>

template <typename T, typename U>

auto max(T a, U b){ //Like wildcards in Java
    return (a > b) ? a : b;
}

int main(){
    //* FUNCTION TEMPLATE
    // function template = describes what a function looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using different data types.

    std::cout << max("Taha", "Ahmet") << std::endl;
    
    return 0;
}