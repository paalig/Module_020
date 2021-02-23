#include <iostream>
//#include <iomanip>

/*
 * Написать функцию, которая принимаем указатель на char, по которому лежит строка.
 * Функция должна возвращать true, если вторая строка является подстрокой первой.
 * Пример:
 * char* a = “Hello world”;
 * char* b = “wor”;
 * char* c = “banana”;
 * std::cout << substr(a,b) << “ “ << substr(a,c);
 * // true false
 */

bool substr(char* a, char* b) {
    bool check = false;
    for (int i = 0; *(a + i) != '\0';) {
        if(*a == *b) {
            int j = 0;
            while (*(b + j) != '\0') {
                check = (*(a + j) == *(b + j));
                j++;
            }
            if (*(b + j) == '\0' && check) {
                return true;
            }
        } else {
            i++;
        }
        a++;
    }
    return check;
}

int main() {
    char a[] = "wowowowowor";
    char b[] = "wor";
    char c[] = "hwowor";

    std::cout << substr(a, b) << " " << substr(a, c);
    //std::cout << std::boolalpha << substr(a, b) << " " << substr(a, c);
}
