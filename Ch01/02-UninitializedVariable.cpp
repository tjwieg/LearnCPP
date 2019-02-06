#include <iostream>

int main() {
    int x; //x is uninitialized, who knows what value it will give?
    std::cout << "x is " << x << ".";
    return 0; //spoiler: it gives 0 because VS Code/g++ is smarter than me
}