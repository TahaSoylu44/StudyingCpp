#include <iostream>

int main(){

    std::string x = "6500830926349533";
    int temp = 0;
    int sum = 0;

    for (int i = 0; i < x.length(); i++)
    {
        if (i % 2 == 0)
        {
            temp = 2 * (x.at(i) - '0');
        }
        else
        {
            temp = x.at(i) - '0';
        }

        if (temp > 9)
        {
            temp = (temp % 10) + (temp / 10);
        }

        sum += temp;
    }

    if (sum % 10 == 0)
    {
        std::cout << "The card is valid" << std::endl;
    }
    else
    {
        std::cout << "The card is not valid" << std::endl;
    }
    
    return 0;
}