#include <iostream>

int fibonacci(int n) {
	if (n <= 2) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;
	std::cout << "Enter the element number of the Fibonacci sequence: ";
	std::cin >> n;

	if (n <= 0) {
		std::cout << "Error: Element number must be a positive integer." << std::endl;
	}
	else {
		int result = fibonacci(n);
		std::cout << "An element of the Fibonacci sequence with a number " << n << ": " << result << std::endl;
	}

	return 0;
}