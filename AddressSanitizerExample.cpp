#include<iostream>
unsigned int globalArray[10] = {0};

int main() {
    const int x = 2;
    //globalArray[10 + x] = 1;

    std::cout << "Bad Address invoke !!" << std::endl;

    int* p = new int[10];
    delete[] p;

    return 0;
}