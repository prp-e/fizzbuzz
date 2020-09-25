#include "stdio.h"

void fizzbuzz(int input){
	if(input % 5 == 0 && input % 3 == 0){
		printf("FizzBuzz\n");
	} else if(input % 5 == 0) {
		printf("Fizz\n");
	} else if(input % 3 == 0) {
		printf("Buzz\n");
	} else {
		printf("%d\n", input);
	}
}

int main() {
	int input_number;
	while(1){
		printf("Enter a number: ");
		scanf("%d", &input_number);
		fizzbuzz(input_number);
	}
	return 0;
}
