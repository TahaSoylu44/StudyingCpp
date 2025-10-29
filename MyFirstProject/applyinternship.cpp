#include <iostream>

int main(){
    double gpa;

    std::cout << "Please enter your gpa: ";
    std::cin >> gpa;

    if(4 > gpa >= 3){
        std::cout << "You can apply it!" << std::endl;
    }
    else if(gpa < 0){
        std::cout << "Are you kidding?" << std::endl;
    }
    else if (gpa > 4){
        std::cout << "You cannot be that successful :))" << std::endl;
    }
    else{
        std::cout << "You cannot apply it!" << std::endl;
    }
    
    return 0;
}