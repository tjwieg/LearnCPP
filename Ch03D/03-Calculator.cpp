#include <iostream>

double getUserNumber() {
    double userNumber{};
    std::cout << "Enter a double value: ";
    std::cin >> userNumber; //if user enters a non-double here then segfault lol
    return userNumber;
}

char getUserOperation() {
    char userOperation{};
    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> userOperation;
    if (userOperation == '+') return userOperation; //NB: ' is different than "
    if (userOperation == '-') return userOperation;
    if (userOperation == '*') return userOperation;
    if (userOperation == '/') return userOperation;
    else {
        std::cout << "Unrecognized operation. Try again...\n";
        getUserOperation(); //recursion if operation not entered; flushes buffer
    }
}

double calculate(double x1, double x2, char op) {
    if (op == '+') return x1+x2;
    if (op == '-') return x1-x2;
    if (op == '*') return x1*x2;
    if (op == '/') return x1/x2;
    else return 0; //not the best error check, but input is *mostly* protected
}

int main() {
    std::cout << std::endl; //just to add a little whitespace
    
    double firstNumber{}; //get numbers from user
    double secondNumber{};
    firstNumber = getUserNumber();
    secondNumber = getUserNumber();

    char operation{}; //get the operation from the user
    operation = getUserOperation();

    double output{}; //calculate the output value
    output = calculate(firstNumber, secondNumber, operation);

    std::cout << "\t" << firstNumber << " " << operation << " " << secondNumber;
    std::cout << " is " << output << "\n"; //print output value to stdout
    return 0;
}
