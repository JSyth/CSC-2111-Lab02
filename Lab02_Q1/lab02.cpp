// Assignment: Lab 2 Question 2
// Author: Joshua Forsyth

#include <iostream>

// Returns the sum of the squares of all integers from 1 to n
int SumOfSquares(const int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
		sum += i*i;

	return sum;
}

void main()
{
	int userInput;

	// Get input
	std::cout << "Please enter a positive integer: ";
	std::cin >> userInput;

	// Print the sum of squares to the console
	std::cout << SumOfSquares(userInput) << std::endl;

	// Keep window open
	system("pause");
}