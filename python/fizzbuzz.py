def fizzbuzz(input_number):
	if input_number % 5 == 0 and input_number % 3 == 0:
		print("FizzBuzz")
	elif input_number % 5 == 0:
		print("Fizz")
	elif input_number % 3 == 0:
		print("Buzz")
	else:
		print(str(input_number))


if __name__ == "__main__":
	while True:
		input_value = input("Enter a number: ")
		fizzbuzz(int(input_value))


