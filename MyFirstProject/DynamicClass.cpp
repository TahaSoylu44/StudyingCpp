#include <iostream>

using namespace std;

class Number{
    public:
        int* mynumbers;

    Number(){
        mynumbers = new int[3];
    }

    ~Number(){
        delete[] mynumbers; 
    }

    void arrayMethod(int x, int y, int z){
        *(mynumbers) = x;
        *(mynumbers + 1) = y;
        *(mynumbers + 2) = z;
    }
};

int main() {

    Number myobject;

    myobject.arrayMethod(3, 4, 5);

    for (int i = 0; i < 3; i++)
    {
        cout << (myobject.mynumbers)[i] << endl;
    }
    return 0;
}