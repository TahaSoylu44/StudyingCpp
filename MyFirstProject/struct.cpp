#include <iostream>

struct Computer{
    std::string mark;

    int ram;
    int ssd;

    bool isWorking;
};

void printComputer(Computer computer){
    std::cout << "computer Mark: " << computer.mark << std::endl;
    std::cout << "computer isWorking: " << computer.isWorking << std::endl;
    std::cout << "computer ram: " << computer.ram << std::endl;
    std::cout << "computer ssd: " << computer.ssd << std::endl;
}

void upgradeComputer(Computer &computer, int ram){
    computer.ram = ram;
}


int main(){

    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, int, char, double)
    //          variables in structs are known as "members"
    //          members can be accessed with . "Class Member Access Operator"

    Computer computer1;
    computer1.mark = "MSI";
    computer1.isWorking = true;
    computer1.ram = 16;
    computer1.ssd = 512;

    Computer computer2;
    computer2.mark = "ASUS";
    computer2.isWorking = true;
    computer2.ram = 16;
    computer2.ssd = 1024;

    printComputer(computer1);
    std::cout << " " << std::endl;
    printComputer(computer2);

    upgradeComputer(computer1, 32);

    printComputer(computer1);

    return 0;
}