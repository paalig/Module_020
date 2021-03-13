#include <iostream>

void swap(int* a, int* b) {
    int* temp = a;
    a = b;
    b = temp;
    std::cout << *a << " " << *b;
}

int main() {
    int a = 10;
    int b = 20;
    swap(&a, &b);

    return 0;
}
