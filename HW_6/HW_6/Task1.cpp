#include <iostream>

int main()
{
    double firstElement, step, lastElement;
    std::cout << "Enter the first element: ";
    std::cin >> firstElement;
    std::cout << "Enter the arithmetic progression step: ";
    std::cin >> step;
    std::cout << "Enter the number of the last item: ";
    std::cin >> lastElement;

    for (double currentElement = firstElement; currentElement <= lastElement;
        currentElement += step) {
        std::cout << currentElement << " ";
    }

    return 0;
}

