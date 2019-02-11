#include <iostream>

void flushBuffer(char ch, bool isInput) {
    if (!isInput) ch = std::cin.peek(); //if no input ch, get next character
    //in the stdin buffer and save it as ch without changing buffer

    if (ch != 10) { //10 is \n newline character at end of user entry
        if (!isInput) std::cin >> ch; //keep the saved value if isInput == true
        std::cout << ch << " has ASCII code " << static_cast<int>(ch) << ".\n";
        flushBuffer(0, false); //recursion, without input ch, to flush through
    };
    //if ch == 10, then it is end of the entry and we stop recursion
}

int main() {
    std::cout << "Input some keyboard characters: ";
    char ch{};
    std::cin >> ch; //fill the stdin buffer with user input
    flushBuffer(ch, true);
    
    return 0;
}
