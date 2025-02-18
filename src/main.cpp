#include <iostream>
#include "utils.hpp"

int main() {
    int x = 10, y = 4;
    std::cout << "Сложение: " << add(x, y) << std::endl;
    std::cout << "Вычитание: " << subtract(x, y) << std::endl;

    // Используем функцию умножения
    std::cout << "Умножние: " << multiply(x, y) << std::endl;
    return 0;
}
