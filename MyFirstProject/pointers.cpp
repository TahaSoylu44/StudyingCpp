#include <iostream>

using namespace std;

void square(int n){
    n = n * n;
}

int main(){
    // string* pName = nullptr;
    // string name = "Taha";

    // pName = &name;

    // string** ppName = &pName;   //Do not forget to specify the dimension.

    // cout << "The adress of the pointer of the name: " << ppName << endl;
    // cout << "The adress of the name: " << pName << endl;
    // cout << "The name itself: " << *pName << endl;

    // cout << "################" << endl;

    // int arr[3] = {1, 2, 3};
    // int* pArr = arr;

    // cout << "The address of the array: "<< pArr << endl;
    // pArr++; //go to the next element
    // cout << "The address of the array: "<< pArr << endl;

    //Dynamic Memory
    // int* pNum = new int;
    // *pNum = 44;
    
    // cout << "The address of the num: "<< pNum << endl;
    // cout << "The num itself:  "<< *pNum << endl;

    // delete pNum;

    // return 0;

    int* pNum = new int;
    *pNum = 44;
    square(*pNum);

    cout << *pNum << endl;

    return 0;



}