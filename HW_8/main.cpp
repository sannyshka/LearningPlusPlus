#include "LoopFunctions.h"
#include "RecursiveFunctions.h"

int main() {
    // Task 1
    std::cout << "Task 1:" << std::endl;
    LoopFunctions::countNumbers(5);

    // Task 2
    std::cout << "\nTask 2a (Factorial using Loop): " << RecursiveFunctions::factorialLoop(5) << std::endl;
    std::cout << "Task 2b (Factorial using Recursion): " << RecursiveFunctions::factorialRecursive(5) << std::endl;

    // Task 3
    std::cout << "\nTask 3a (Descending Loop): ";
    LoopFunctions::printNaturalNumbersDescending(5);
    std::cout << "Task 3b (Ascending Loop): ";
    LoopFunctions::printNaturalNumbersAscending(5);
    std::cout << "Task 3c (Descending Recursive): ";
    RecursiveFunctions::printNaturalNumbersDescendingRecursive(5);
    std::cout << "Task 3d (Ascending Recursive): ";
    RecursiveFunctions::printNaturalNumbersAscendingRecursive(5);

    return 0;
}
