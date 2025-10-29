#include <iostream>

int sum(int n);

int main(){
    
    int until5 = (1000 / 5) - 1;
    int until3  = 1000 / 3;
    int until15 = 1000 / 15;

    int result = 5 * sum(until5) + 3 * sum(until3) - 15 * sum(until15);

    std::cout << result;
    
    return 0;
}

int sum(int n){
    return 0.5 * n * (n + 1);
}