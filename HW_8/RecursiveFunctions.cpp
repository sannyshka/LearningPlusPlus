#include "RecursiveFunctions.h"
#include <iostream>

int RecursiveFunctions::factorialLoop(int count) {
    int result = 1;
    for (int i = 1; i <= count; ++i) {
        result *= i;
    }
    return result;
}

int RecursiveFunctions::factorialRecursive(int count) {
    if (count == 0 || count == 1) {
        return 1;
    }
    else {
        return count * factorialRecursive(count - 1);
    }
}

void RecursiveFunctions::printNaturalNumbersDescendingRecursive(int n) {
    if (n > 0) {
        std::cout << n << " ";
        printNaturalNumbersDescendingRecursive(n - 1);
    }
    else {
        std::cout << std::endl;
    }
}

void RecursiveFunctions::printNaturalNumbersAscendingRecursive(int n) {
    if (n > 0) {
        printNaturalNumbersAscendingRecursive(n - 1);
        std::cout << n << " ";
    }
    else {
        std::cout << std::endl;
    }
}
