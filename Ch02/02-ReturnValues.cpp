#include <iostream>

int getUserNumber() {
    int num{};
    std::cout << "Enter a number: ";
    std::cin >> num;
    return num;
}

int main() {
    int x{getUserNumber()};
    std::cout << "You entered " << x << ".\n";

    return 0;
}
