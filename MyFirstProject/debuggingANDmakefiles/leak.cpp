#include <iostream>

void cause_a_leak(){
	int* p_leak = new int[10];	//Allocate memory on the heap
	p_leak[0] = 123;
	//We forgot  to call delete[] p_leak; here!
}

int main(){
	cause_a_leak();
	std::cout << "Program finished." << std::endl;
	return 0;
}
