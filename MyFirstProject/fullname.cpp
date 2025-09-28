#include <iostream>


using string_t = std::string;
string_t fullname(string_t name, string_t surname);


int main(){
   string_t name;
   string_t surname;

   std::cout << "Enter your first name: ";
   std::cin >> name;

   std::cout << "Enter your surname: ";
   std::cin >> surname;

   std::cout << "Welcome " << fullname(name, surname) << std::endl;
    
    return 0;
}

string_t fullname(string_t name, string_t surname){
    return name + " " + surname;
}