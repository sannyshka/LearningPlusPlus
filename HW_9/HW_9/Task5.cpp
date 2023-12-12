#include <iostream>
bool isEqual(const char str1[], const char str2[]) {
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			return false;
		}
		++i;
	}
	return str1[i] == '\0' && str2[i] == '\0';
}


int main() {
	const int maxSize = 100;
	char str1[maxSize], str2[maxSize];

	std::cout << "Enter the first string: ";
	std::cin.getline(str1, maxSize);
	std::cout << "Enter the second string: ";
	std::cin.getline(str2, maxSize);

	if (isEqual(str1, str2)) {
		std::cout << "String are equal!";
	}
	else {
		std::cout << "Strings are not equal!";
	}

	return 0;
}

