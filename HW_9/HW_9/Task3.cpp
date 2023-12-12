#include <iostream>
#include <cstring>

bool isPalindrom(const char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int maxSize = 100;
    char str[maxSize];

    std::cout << "Enter a string: ";
    std::cin.getline(str, maxSize);

    if (isPalindrom(str)) {
        std::cout << "Palindrome!";
    }
    else {
        std::cout << "Not palindrome!";
    }

    return 0;
}
