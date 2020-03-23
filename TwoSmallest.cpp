#include <iostream>

/**
 * Finds the smallest and second smallest values of a set of inputs
 * 
 * Accepts any number of double inputs
 * 
 * Prints the smallest and second smallest values
 **/
int main(int argc, char** argv) {

    if(argc < 3) {
        std::cout << "Please input two or more numbers";
        return 0;
    }
    
    double smallest = (atof(argv[1]) < atof(argv[2])) ? atof(argv[1]) : atof(argv[2]);
    double secondSmallest = (atof(argv[1]) < atof(argv[2])) ? atof(argv[2]) : atof(argv[1]);


    for(int i = 3; argv[i] != 0; i++) {
        double newNumber = atof(argv[i]);
        if(newNumber < secondSmallest) {
            if(newNumber < smallest) {
                secondSmallest = smallest;
                smallest = newNumber;
            }
            else {
                secondSmallest = newNumber;
            }
        }
    }

    std::cout << smallest << std::endl;
    std::cout << secondSmallest;

    return 0;
}