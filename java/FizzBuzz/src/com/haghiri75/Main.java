package com.haghiri75;

import java.util.Scanner;

public class Main {

    public static void fizz_buzz(int input){
        if(input % 5 == 0 && input % 3 == 0){
            System.out.println("FizzBuzz");
        }
        else if(input % 3 == 0){
            System.out.println("Buzz");
        }
        else if(input % 5 == 0) {
            System.out.println("Fizz");
        }
        else{
            System.out.println(input);
        }
    }

    public static void main(String[] args) {
	// write your code here
        Scanner input_number = new Scanner(System.in);
        while(true){
            System.out.print("Enter a number: ");
            int input_value = input_number.nextInt();
            fizz_buzz(input_value);
        }
    }
}
