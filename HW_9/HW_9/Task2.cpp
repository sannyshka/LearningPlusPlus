#include <iostream>

void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main() {
    const int maxSize = 100;
    char str[maxSize];

    std::cout << "Enter a string: ";
    std::cin.getline(str, maxSize);

    toUppercase(str);

    std::cout << "Uppercase string: " << str;

    return 0;

}
