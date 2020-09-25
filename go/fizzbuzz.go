package main

import "fmt"

func fizzbuzz(input int32) {
	if(input % 5 == 0 && input % 3 == 0) {
		fmt.Println("FizzBuzz")
	} else if(input % 5 == 0) {
		fmt.Println("Fizz")
	} else if(input % 3 == 0) {
		fmt.Println("Buzz")
	} else {
		fmt.Println(input)
	}
}

func main() {
	var input int32;
	for 1 == 1 {
		fmt.Print("Enter a number: ")
		fmt.Scanf("%d", &input)
		fizzbuzz(input)
	}
}
