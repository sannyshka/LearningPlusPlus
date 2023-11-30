#include <iostream>

int main()
{
    int size;

    std::cout << "Enter page size/number of lines: ";
    std::cin >> size;

    //Inverted triangle a.
    std::cout << "a." << std::endl;
    for (int i = size; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    //A right triangle b.
    std::cout << "b." << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    //Rectangle c.
    std::cout << "c." << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    //Pattern e.
    std::cout << "e." << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j <= i; ++j) {
            if ((i + j) % 2 == 0) {
                std::cout << "0";
            }
            else {
                std::cout << "1";
            }

        }
        std::cout << std::endl;
    }

    return 0;
}
