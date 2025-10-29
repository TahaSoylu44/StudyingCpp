#include <iostream>

class Animal{
    private:
        bool isAlive = true;
    public:
        void eat(){
            std::cout << "This animal is eating" << std::endl;
        }

        bool getIsAlive(){
            return isAlive;
        }
};

class Dog : public Animal{
    private:
        std::string name;
        int age;
    public:
        Dog(std::string name, int age){
            this->name = name;
            this->age = age;
        }

        //GETTERS
        std::string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        //SETTERS
        void setName(std::string){
            this->name = name;
        }
        
        void setAge(int age){
            this->age = age;
        }

        void bark(){
            std::cout << name << " is barking." << std::endl;
        }

        void walk(int meter){
            std::cout << name << " walked " << meter << " meters." << std::endl;
        }

};

int main() {
    
    // object = A collection of attributes and methods
    //          They can have charasteristics and could perform actions
    //          Can be used to mimic real world items (Book, Human etc.)
    //          Created from a class which acts as a "blue-print

    Dog dog1("Carl", 44);
    Dog dog2("Johnny", 23);

    std::cout << "****************" << std::endl;
    std::cout << "dog1's name is " << dog1.getName() << std::endl;
    std::cout << "dog1's age is " << dog1.getAge() << std::endl;
    std::cout << "Is the dog alive: " << dog1.getIsAlive() << std::endl;
    
    
    std::cout << "****************" << std::endl;
    std::cout << "dog2's name is " << dog2.getName() << std::endl;
    std::cout << "dog2's age is " << dog2.getAge() << std::endl;
    std::cout << "Is the dog alive: " << dog2.getIsAlive() << std::endl;

    std::cout << "****************" << std::endl;
    dog1.bark();
    dog2.bark();

    dog1.eat();

    return 0;
}