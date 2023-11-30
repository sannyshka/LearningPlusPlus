#include <iostream>

unsigned long long factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main()
{
	int number;
	std::cout << "Enter a positive integer: ";
	std::cin >> number;

	if (number < 0) {
		std::cout << "Error: Enter a positive integer." << std::endl;
	}
	else {
		unsigned long long result = factorial(number);
		std::cout << "Factorial " << number << "! = " << result << std::endl;
	}

	return 0;
}
