#include <iostream>

void flushBuffer(char ch, bool isInput) {
    if (!isInput) ch = std::cin.peek();

    if (ch != 10) { //10 is \n newline character
        if (!isInput) std::cin >> ch;
        std::cout << ch << " has ASCII code " << static_cast<int>(ch) << ".\n";
        flushBuffer(0, false); //call it again
    };
}

int main() {
    std::cout << "Input some keyboard characters: ";
    char ch{};
    std::cin >> ch;
    flushBuffer(ch, true);
    
    return 0;
}
