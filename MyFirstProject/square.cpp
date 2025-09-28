#include <iostream>

double square(double x);

int main(){

    std::cout << "The square of 3 is " << square(3);
    return 0;
}

double square(double x){
    return x*x;
}