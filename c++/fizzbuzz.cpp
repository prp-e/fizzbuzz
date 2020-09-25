#include <iostream>

void fizzbuzz(int input) {
	if(input % 5 == 0 && input % 3 == 0) {
		std::cout << "FizzBuzz" << std::endl;
	} else if(input % 5 == 0) {
		std::cout << "Fizz" << std::endl;
	} else if(input % 3 == 0) {
		std::cout << "Buzz" << std::endl;
	} else {
		std::cout << input << std::endl;
	}
}

int main() {

	int input_value;
	
	while(true) {
		std::cout << "Enter a number: ";
		std::cin >> input_value ; 

		fizzbuzz(input_value);
	}

	return 0;
}
