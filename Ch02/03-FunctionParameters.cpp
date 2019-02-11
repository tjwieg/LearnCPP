#include <iostream>

int doubleNumber(int x) {
    return 2*x;
}

int main() {
    //prompt user for a number
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    //print double that number
    std::cout << "Double " << x << " is " << doubleNumber(x) << ".\n";
    return 0;
}
