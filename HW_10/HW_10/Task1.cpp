#include <iostream>


void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 20, y = 30;

   
    swap(x, y);
    std::cout << "Swap using references: x = " << x << ", y = " << y << std::endl;

    swap(&x, &y);  
    std::cout << "Swap using pointers: x = " << x << ", y = " << y << std::endl;

    return 0;
}
