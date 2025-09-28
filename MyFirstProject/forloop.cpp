#include <iostream>

int main(){

    /*
    
    for (int i = 0; i < 38; i++)
    {
        if (i == 20)
        {
            continue;
        }
        
        std::cout << i << std::endl;

        if (i == 30)
        {
            break;
        }
    
    }
    */

    //foreach loop -> loop that eases the traversal over an iterable data set.

    std::string names[] = {"Taha","Soylu","Asaf","Akif"};

    for(std::string name : names){
        std::cout << name << std::endl;
    }

    return 0;
}