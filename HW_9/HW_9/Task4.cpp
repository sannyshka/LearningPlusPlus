#include <iostream>
#include <cctype>

void parseStringLetters(const char str[], int& vowelsCount, int& consonantsCount) {
	vowelsCount = 0;
	consonantsCount = 0;

	for (int i = 0; str[i] != '\0'; ++i) {
		char ch = tolower(str[i]);
		if (ch >= 'a' && ch <= 'z') {
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
				++vowelsCount;
			}
			else {
				++consonantsCount;
			}
		}
	}
}

int main() {
	const int maxSize = 100;
	char str[maxSize];

	std::cout << "Enter a string: ";
	std::cin.getline(str, maxSize);

	int vowelsCount, consonantCount;

	parseStringLetters(str, vowelsCount, consonantCount);

	std::cout << "Vowels: " << vowelsCount << ", Consonants: " << consonantCount;

	return 0;
}
