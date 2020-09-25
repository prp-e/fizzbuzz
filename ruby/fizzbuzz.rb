def fizzbuzz(input_number)
	if input_number % 5 == 0 && input_number % 3 == 0
		puts "FizzBuzz"
	elsif input_number % 5 == 0
		puts "Fizz"
	elsif input_number % 3 == 0
		puts "Buzz"
	else
		puts input_number
	end
end

while true do
	print "Enter a value: "
	input_value = gets.chomp
	fizzbuzz(input_value.to_i)
end
