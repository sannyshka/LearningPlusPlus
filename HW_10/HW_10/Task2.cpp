#include <iostream>

bool calculateSum(const double* arr, int arrSize, double& sum) {
    if (arrSize <= 0) {
        return false;
    }

    sum = 0;
    for (int i = 0; i < arrSize; ++i) {
        sum += arr[i];
    }

    return true;
}

int main() {
    const int arrSize = 5;
    double arr[arrSize] = { 20.5, 10.5, 8.5, 12.5, 6.5 };
    double resultSum;

    if (calculateSum(arr, arrSize, resultSum)) {
        std::cout << "Sum of array elements: " << resultSum << std::endl;
    }
    else {
        std::cout << "Array size is not greater than 0." << std::endl;
    }

    return 0;
}
