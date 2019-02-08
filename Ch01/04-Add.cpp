#include <iostream>

int main() {
    //Instantiate variables
    int user1{};
    int user2{};

    //Capture user input
    std::cout << "Input 1st number: ";
    std::cin >> user1;
    std::cout << "Input 2nd number: ";
    std::cin >> user2;
    std::cout << "-----\n";

    //Output added/subtracted values
    std::cout << user1 << " + " << user2 << " = " << user1 + user2 << "\n";
    std::cout << user1 << " - " << user2 << " = " << user1 - user2 << "\n";
    std::cout << user2 << " - " << user1 << " = " << user2 - user1 << "\n";

    return 0;
}
