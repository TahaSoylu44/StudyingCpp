#include <iostream>

int main(){
    
    // Dynamic Memory = Memory that is allocated after the program
    //                  is already compiled or running
    //!                 Use the "new" operator to allocate memory 
    //                  in the heap rather than the stack
    //                  Useful when we do not know how much memory
    //                  we will need.Makes our programs more
    //                  flexible especially when accepting user input


    int* pNum = nullptr;

    pNum = new int;      //We will use heap memory

    *pNum = 44;

    std::cout << "address: " << pNum << std::endl;
    std::cout << "number: " << *pNum << std::endl;

    delete pNum;        //When we use "new",we should not forget to use "delete"

    return 0;
}