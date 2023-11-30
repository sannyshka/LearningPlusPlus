#include "LoopFunctions.h"


void LoopFunctions::countNumbers(int n) {
    int positive = 0, negative = 0, zeroes = 0;
    int num;

    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        if (num > 0) {
            positive++;
        }
        else if (num < 0) {
            negative++;
        }
        else {
            zeroes++;
        }
    }

    std::cout << "Positive: " << positive << ", negative: " << negative << ", zeroes: " << zeroes << std::endl;
}

void LoopFunctions::printNaturalNumbersDescending(int n) {
    for (int i = n; i > 0; --i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void LoopFunctions::printNaturalNumbersAscending(int n) {
    for (int i = 1; i <= n; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
