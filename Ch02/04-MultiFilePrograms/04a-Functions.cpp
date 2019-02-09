#include <iostream>

int getInteger() {
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    return x;
}

int add(int x, int y) {
    return x+y;
}
