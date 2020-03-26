#include <iostream>

/**
 * Find the checksum of nine digit integer
 * 
 * Accepts on nine digit integer input
 * 
 * Prints the checksum digit
 **/
int main(int argc, char** argv) {

    int sum = 0;
    int number = atoi(argv[1]);

    for(int i = 0; i < 9; i++) {
        sum += (number % 10) * (i+2);
        number = number / 10;
    }

    std::cout << ((11 - (sum % 11) == 10) ? "X" : std::to_string((sum % 11 == 0) ? 0:11 - (sum % 11)));

    return 0;

}