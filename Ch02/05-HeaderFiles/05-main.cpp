#include <iostream>
#include "05-add.hpp" //header with forward declaration of add()

int main() {
    //set x=1 and y=2 for some example variables
    int x{1};
    int y{2};

    //print "1 + 2 = 3" and then go to newline
    std::cout << x << " + " << y << " = ";
    std::cout << add(x, y) << "\n";
}
