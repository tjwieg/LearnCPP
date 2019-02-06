#include <iostream>

int main() {
    //Instantiate variables
    int userNumber{};

    //Capture user input
    std::cout << "Enter an integer: ";
    std::cin >> userNumber;

    //Calculate value
    int userDouble{2*userNumber}; //actually this is a bad way to do it, just stick 2*userNumber into the std::cout expression instead of making a whole new variable

    //Output doubled number
    std::cout << "Double that number is: " << userDouble << "\n";

    //Bonus! Output tripled number
    std::cout << "Triple that number is: " << 3*userNumber << "\n";
}
