#include <iostream>

using namespace std;

void sum(int &n){
	n = 0.5 * n *(n + 1);
}

int main(){
	int* pNum = new int;
	
	cout << "Enter the number: ";
	cin >> *pNum;

	int a = *pNum;

	sum(a);

	cout << "The result is " << a << endl;
	
	delete pNum;

	return 0;
}
