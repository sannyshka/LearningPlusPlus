#include <iostream>
#include <cctype>

int main()
{
    char inputChar;
    int digitSum = 0;

    while (true) {
        std::cout << "Enter a character (enter '.' to complete): ";
        std::cin >> inputChar;

        if (inputChar == '.') {
            std::cout << "The program is complete." << std::endl;
            break;
        }
        else if (islower(inputChar)) {
            char upperCaseChar = toupper(inputChar);
            std::cout << "The given letter: " << upperCaseChar << std::endl;
        }
        else if (isdigit(inputChar)) {
            int digitValue = inputChar - '0';
            digitSum += digitValue;
            std::cout << "Current sum of digits: " << digitSum << std::endl;
        }
        else {
            std::cout << "The character is not processed by the program." << std::endl;
        }

    }

    return 0;
}
