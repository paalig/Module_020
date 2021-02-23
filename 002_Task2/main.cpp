#include <iostream>

/*
 * Написать функцию, которая принимает указатель на тип int, по которому размещены 10 переменных типа int.
 * Функция должна вернуть другой указатель на int, по которому лежат те же элементы, но в обратном порядке
 */
int b = 9;
int pivot(int* a) {
    int* pb = a + b;
    b -= 2;
    return *pb;
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++) {
        std::cout << pivot(a + i) << " ";
    }
}
