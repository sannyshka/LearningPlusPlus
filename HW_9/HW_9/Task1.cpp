#include <iostream>

void translateArray(int numbers[], int size) {
	for (int i = 0; i < size; ++i) {
		if (numbers[i] > 0) {
			numbers[i] *= 2;
		}
		else {
			numbers[i] = 0;
		}
	}
}

int main() {
	const int size = 10;
	int numbers[size];

	std::cout << "Enter 10 numbers: ";
	for (int i = 0; i < size; ++i) {
		std::cin >> numbers[i];
	}

	translateArray(numbers, size);

	std::cout << "Modified array: ";
	for (int i = 0; i < size; ++i) {
		std::cout << numbers[i] << " ";
	}

	return 0;
}
