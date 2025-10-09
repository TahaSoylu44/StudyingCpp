#include <iostream>

using namespace std;

int factorial(int n){
	if(n <  0){
		return -1;
	}
	else if(n == 0){
		return 1;
	}
	else{
		return n * factorial(n - 1);
	}
}


int main(){
	int* pNum = new int;
	cout << "Please enter the number: ";
	cin >> *pNum;
	cout << "The result is " << factorial(*pNum) << endl;
	
	delete pNum;

	return 0;
}
