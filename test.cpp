#include "add.h"
#include "multiply.h"
#include "pow.h"
#include <iostream>

void areEquals(double expected, double got){
	if(expected != got){
		std::cout << "Expected " << expected << " but got: " << got << std::endl;
	}
	else{
		std::cout << "Success!" << std::endl;
	}
}

int main(){
	areEquals(4, add(2, 2));
	areEquals(9, multiply(3, 3));
	areEquals(16, pow(2, 4));
	std::cout << "End of tests!" << std::endl;
	return 0;
}
