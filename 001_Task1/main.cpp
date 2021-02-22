#include <iostream>

void swap(int* b, int* a) {
    std::cout << *a << " " << *b;
}

int main() {
    int a = 10;
    int b = 20;
    swap(&a, &b);

    return 0;
}
