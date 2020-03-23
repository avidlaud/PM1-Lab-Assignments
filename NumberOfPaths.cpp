#include <iostream>

int numPaths(int, int, int, int);

/**
 * Finds the number of unique paths from the start coordinates to destination coordinates
 * 
 * Accepts four inputs
 *  int startX  the starting row
 *  int startY  the starting column
 *  int destX   the destination row
 *  int destY   the destination column
 * 
 * Prints the number of unique paths
 **/
int main() {

    int startX, startY, destX, destY;

    std::cout << "Please input a starting row\n";
    std::cin >> startX;
    std::cout << "Please input a starting column\n";
    std::cin >> startY;
    std::cout << "Please input a ending row\n";
    std::cin >> destX;
    std::cout << "Please input a ending column\n";
    std::cin >> destY;

    std::cout << numPaths(startX, startY, destX, destY);

    return 0;
}

int numPaths(int startX, int startY, int destX, int destY) {

    if(startX == destX && startY == destY) {
        return 1;
    }

    if(startX != destX && startY != destY) {
        return numPaths(startX + 1, startY, destX, destY) + numPaths(startX, startY + 1, destX, destY);
    }
    else if(startX != destX) {
        return numPaths(startX + 1, startY, destX, destY);
    }
    else {
        return numPaths(startX, startY + 1, destX, destY);
    }

}