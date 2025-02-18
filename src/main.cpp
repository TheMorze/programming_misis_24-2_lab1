#include <iostream>
#include "utils.hpp"

int main() {
    int x = 10, y = 4;
    std::cout << "Сложение: " << add(x, y) << std::endl;
    std::cout << "Вычитание: " << subtract(x, y) << std::endl;

    std::cout << "Changed message in main branch!" << std::endl;
    return 0;
}
