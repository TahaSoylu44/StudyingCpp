#include <iostream>
#include <cmath>
#include <algorithm>

//THIS PART FOR TYPEDEF
typedef std::string string_t;       //"string_t" is nickname of "std::string".We do not have to type long anymore :)
//There is another option to do that:
using string_t = std::string;

//THIS PART FOR NAMESPACES
namespace malatya{
    int number = 44;
}

namespace ankara{
    int number = 6;
}

/**
 * @brief factorial
 * 
 * @param num int number
 * @return int num!
 */
int factorial(int num){
    if(num > 0){
        if(num > 1){
            return num * factorial(num - 1);
        }
        else{
            return 1;
        }
    }
    else if(num == 0){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){     //";" means that a statement is done!Compiler knows it.

    //USAGE OF "std::cout":
    //std::cout << "Hello World!" << std::endl;    //std -> "standart" cout->"character out"  "<<" -> OUTPUT
    //std::cout << "I hope this will be executed :)" << std::endl;    //std::endl -> This the end.You can go the next line.
    
    //INTEGER
    int x;  //Declaration
    x = 5;  //Assignment
    int y = 6;
    int sum = x + y;

    //NOTE
    //If we assign a decimal number to int variable,lets see what happens:
    int z = 5.6;    //OUTPUT:5  //We declared z as integer but assigned to a decimal number.z ignores the decimal part.

    /*
    std::cout << x << '\n'; //displays x 5
    std::cout << y << '\n'; //6
    std::cout << sum << '\n';   //11
    std::cout << z << '\n'; //5
    */

    //DOUBLE
    double price = 4.4;
    double gpa = 3.25;

    /*
    std::cout << price << std::endl;
    std::cout << gpa;
    */

    //CHAR
    char grade = 'A';
    char initial = 'B';
    //int wth = 'BC'; //NOTE: Such a statment is regarded as integer.
    //Compiler compiles the code but it also warns us.
    //char doubleone = 'BC';  //The last letter will be seen.
    
    /*
    std::cout << initial << std::endl;
    std::cout << grade << std::endl;
    std::cout << wth << std::endl;
    std::cout << doubleone << std::endl;
    */
    
    //BOOLEAN
    bool isStudent = true;  //1
    bool isMan = false; //0

    /*
    std::cout << isStudent << std::endl;
    std::cout << isMan << std::endl;
    */

    //STRING    (object that represents a sequence of text)
    std::string name = "Taha";
    std::string surname = "Soylu";

    /*
    std::cout << name << std::endl;
    std::cout << surname << std::endl;
    std::cout << "Hello " << name << " " << surname << std::endl;
    std::cout << "You are " << sum << " years old." << std::endl;
    std::cout << "I don't know what " << isStudent << " is." << std::endl;
    */

    //CONST (Used to keep a variable constant.)
    const double PI = 3.14; //This variable cannot be changed.
    //std::cout << PI << std::endl;

    //NAMESPACE
    //  Namespace = provides a solution for preventing name conflicts.
    //              in large projects.Each entity needs a unique name.
    //              A namespace allows for identically named identities
    //              as long as the namespaces are different.

    //I created the namespaces outside of the main function.

    /*
    std::cout << malatya::number << std::endl;  //Comes from "malatya" namespace.   OUTPUT:44
    std::cout << ankara::number << std::endl;   //Comes from "ankara" namespace.    OUTPUT:6
    */  //It prevented a nameconflict :)

    //TYPEDEF
    //  typedef =   reserved keyword used to create an additional name
    //              (alias / nickname) for another data type.
    //              New identifier for an existing type.
    //              Helps with readibility and reduces typos.
    //              Use when there is a clear benefit
    //              Replaced with 'using' (work better w/ templates)

    string_t firstName = "Taha";
    string_t lastName = "Soylu";

    //std::cout << "Selamunaleykum " << firstName << " " << lastName << std::endl;

    //ARITHMETIC OPERATORS
    int apple = 3;

    //Increment
    //apple = apple + 1;    //Classic
    //apple += 1 ;          //Python style
    //apple++;              //Java style

    //Decrement
    //apple = apple - 1;    //Classic
    //apple -= 1 ;          //Python style
    //apple--;              //Java style

    //TYPE CONVERSION
    //  type conversion = conversion a value of one data type to another
    //                    Implicit = automatic
    //                    Explicit = precede value with new data type (int)

    int number = 3.14;   //Automatically a double number is converted to an integer number. "x = 3"
    char smt = 100; //This is amazing."smt" variable looks for a character whose ASCII code is 100. -> d

    /*
    std::cout << number << std::endl;
    std::cout << smt << std::endl;
    */

    int correct = 8;
    int questions = 10;
    double rate = (correct / (double)questions) * 100;

    //std::cout << rate << '%' << std::endl;

    //USER INPUT
    string_t userName;
    string_t userSurname;
    string_t fullName;

    /*
    std::cout << "Type your name: ";
    std::cin >> userName;       //cin -> character in

    std::cout << "Type your surname: ";
    std::cin >> userSurname;

    //std::cin.ignore();      //Ignores the whitespace left in the buffer.

    //std::cout << "Welcome " << userName << " " << userSurname << '\n';
    

    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, fullName);           //Provides inputs with whitespaces.

    std::cout << fullName << std::endl;
    */

    //MAX()
    int a = 2;
    int b = 4;
    int c;

    c = std::max(a,b);

    std::cout << c << std::endl;

    //MIN()
    c = std::min(a,b);

    std::cout << c << std::endl;

    //POW()
    c = std::pow(a,b);

    std::cout << c << std::endl;

    //SQRT()
    c = std::sqrt(b);
    
    std::cout << c << std::endl;

    //ABS()
    c = std::abs(-13);

    std::cout << c << std::endl;

    //ROUND()
    c = std::round(3.14);

    std::cout << c << std::endl;

    //TERNARY OPERATOR
    /*
    int naturalNumber = 45;

    (naturalNumber % 2 == 0) ? std::cout << "even" << std::endl : std::cout << "odd" << std::endl;
    */

    bool isHungry = true;
    //(isHungry) ? std::cout << "You can eat my pizza" << std::endl : std::cout << "Sorry,it is my pizza" << std::endl;
    //std::cout << (isHungry ? "You can eat my pizza" : "Sorry,it is my pizza") << std::endl;

    //LOGICAL OPERATORS
    // && = checks if two conditions are true.  (and)   -> Conjuction
    // || = checks if at least one of two conditions is true.   (or)    ->Deconjuction
    // !  = reverses the logical state of its operand.  (not)   ->Negation

    //STRING METHODS
    //.length() -> As we understand from its name,it returns the length of the string.
    //.empty() -> whether the string is empty or not?   (boolean)
    //.clear()  -> Cleans the string
    //.append() ->Concanate with another string.It works like "+"
    //.at() -> Returns the letter at an given position.
    //.insert() -> As we get from its name,it inserts another string to a given position.We saw it in Python using lists.
    //.find()   -> Returns the index of what we look for.Resembles with ".index()" in Python.
    //.erase()  -> Deletes the some parts of the string at given positions.

    std::cout << "#####################" << std::endl;
    // std::cout << name.length() << std::endl;
    // std::cout << name.empty() << std::endl;
    // name.clear();
    // std::cout << name << std::endl;

    // std::cout << name.find("h") << std::endl;
    
    // std::cout << name.append() << std::endl;
    // std::cout << name.at() << std::endl;
    // std::cout << name.insert() << std::endl;
    // std::cout << name.find() << std::endl;
    // std::cout << name.erase() << std::endl;

    //fill()
    //fill()    -> fills a range of elements with a specified value.
    //             fill(begin,end,value)

    //MEMORY ADDRESS
    //memory address = a location in memory where data is stored.
    //a memory address can be accessed with & (adress of operator)

    //std::cout << &name << std::endl;    ->Displays memory address of "name"

    //POINTERS
    // pointers = variables that stores a memory address of another variable.
    // sometimes it is easier to work with an address.

    // &    -> address pf operator
    // *    -> dereference operator

    //std::string mycar = "Mustang";
    //std::string *pMycar = &mycar;     //->That's the point where a variable is.
    //As we see,it stores the data where a variable is.
    //For name convention,we decleare it with "p"

    /*
    std::string mycars[] = {"Mustang","Corvette","Passat"};
    //std::string *pMycars = *mycars;
    std::string first = *mycars;

    std::cout << "****************" << std::endl;

    std::cout << first << std::endl;
    //std::cout << pMycars << std::endl;
    */

    //NULL
    //Null Value = a special value that means something has no value.
    //When a pointer is holding a null value,that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal
    //helpful when determining if an address was successfully assigned to a pointer.

    std::cout << "*****************" << std::endl;
    int mynum = 44;

    int* pointer = nullptr;

    //pointer = &mynum;

    //std::cout << pointer << std::endl;

    //* RECURSION
    // recursion = a programming technique where a function
    //             invokes itself within.

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory and slower


    //std::cout << factorial(10) << std::endl;F

    

    return 0;
}