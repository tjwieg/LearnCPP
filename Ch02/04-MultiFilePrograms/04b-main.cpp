#include <iostream>

//Forward-initialize functions from 04a
int getInteger();
int add(int x, int y);

int main() {
    //Get user input
    int x {getInteger()};
    int y {getInteger()};
    
    //Output the results
    std::cout << x << " + " << y << " = " << add(x, y) << "\n";
    return 0;
}
