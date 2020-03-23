#include <iostream>
#include <climits>

/**
 * Finds the largest number out of five inputs and prints it
 **/
int main() {

    int largest = INT_MIN;
    int curr;

    for(int i = 1; i <= 5; i++) {

        //Assume proper input
        std::cout << "Please input a number\n";
        std::cin >> curr;
        if(curr > largest) {
            largest = curr;
        }

    }

     std::cout << largest;
     return 0;
}