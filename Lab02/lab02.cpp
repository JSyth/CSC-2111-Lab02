// Assignment: Lab 2 Question 1
// Authout: Joshua Forsyth

#include <iostream>

bool IsPrime(const int val)
{
	// Check if val is 1 or 2.
	if (val <= 2)
		return true;
	
	// Check if val is even.
	if (val % 2 == 0)
		return false;
	
	// Check if val is divisible by any odd integer
	// between 3 and the square root of val
	for (int i = 3; i <= sqrt(val); i += 2)
		if (val % i == 0)
			return false;

	return true;
}

void main()
{
	int userInput;

	// Get user input.
	std::cout << "Please enter a positive integer: ";
	std::cin >> userInput;
	
	// Print message to console indiciating whether
	// the input is a prime number or not
	if (IsPrime(userInput))
		std::cout << userInput << " is a prime number." << std::endl;
	else
		std::cout << userInput << " is not a prime number." << std::endl;

	// Keep window open
	system("pause");
}