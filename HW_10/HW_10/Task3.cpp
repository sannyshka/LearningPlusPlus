#include <iostream>

bool find(const int* arr, int size, int elem) {
    const int* end = arr + size;  

    
    for (const int* current = arr; current != end; ++current) {
        if (*current == elem) {
            return true;
        }
    }

    return false;
}

int main() {
    const int arrSize = 5;
    int arr[arrSize] = { 1, 2, 3, 4, 5 };
    int searchElement;

    std::cout << "Enter the element to search: ";
    std::cin >> searchElement;

    if (find(arr, arrSize, searchElement)) {
        std::cout << "Element found in the array." << std::endl;
    }
    else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
