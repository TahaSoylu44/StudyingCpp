#include <iostream>
#include <vector>

using namespace std;

int main() {
    //vectors in c++ are sequence containers representing 
    //arrays that can change in size

    vector<int> v1 = {1,2,3};

    cout << v1.size() << " size" << endl;
    cout << v1.capacity() << " capacity" << endl;

    v1.push_back(44);
    v1.push_back(23);
    v1.push_back(6);

    cout << v1.size() << " size" << endl;
    cout << v1.capacity() << " capacity" << endl;

    v1.pop_back();

    cout << v1.size() << " size" << endl;
    cout << v1.capacity() << " capacity" << endl;

    v1.shrink_to_fit(); //Poping one element did not change the capacity of the array.
    //If want the capacity secnronized with size,we use this method.

    cout << v1.size() << " size" << endl;
    cout << v1.capacity() << " capacity" << endl;

    //! v1.insert(v1.begin(), 999);

    cout << v1[0] << endl;

    v1.erase(v1.begin());
    cout << v1[0] << endl;



    return 0;
}