#include "04-TowerDrop.hpp"
#include <iostream>

double getTowerHeight() { //get the tower height from user
    double towerHeight{};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> towerHeight;
    return towerHeight;
}

double getDroppedDistance(double towerHeight, int t) { //calculate new height
    return towerHeight - 0.5*physicsConstants::gravity*t*t;
}

void printDroppedDistance(double h, int t) {
    std::cout << "At " << t << " \tseconds, the ball is " << h;
    std::cout << " \tmeters above the ground.\n";
}

int main() {
    double height{};
    height = getTowerHeight();
    
    int t{0}; //start at time 0
    double position{height};
    while(getDroppedDistance(height, t) > 0){
        position = getDroppedDistance(height, t);
        printDroppedDistance(position, t);
        t = t+1; //step forward 1 second each iteration
    }

    std::cout << "At " << t << " seconds, the ball is on the ground.\n";
    return 0;
}
