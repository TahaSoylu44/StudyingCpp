#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
	int root = sqrt(n);
	
	if(n < 2){
		return false;
	}
	else if(n == 2){
		return true;
	}
	else if(n % 2 == 0){
		return false;
	}
	else{
		for(int i = 3; i <= root; i +=2){
			if(n % i == 0){
				return false;
			}
		}
		return true;
	}
}


int main(){
	int num;
	cout << "Enter your number: ";
	cin >> num;

	if(isPrime(num) == 1){
		cout << num << " is a prime number." << endl;
	}
	else{
		cout << num << " is not a  prime number." << endl;
	}
	return 0;
}
