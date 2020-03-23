#include <iostream>
#include <cctype>
#include <math.h>

bool isNumber(char*);

/**
 * Calculates the effective temperature with wind chill (in Fahrenheit)
 * 
 * Accepts two arguments: 
 *  double  temperature the base temperature in fahrenheit
 *  double  velocity    the wind speed in miles per hour
 * 
 * Prints effective temperature
 **/
int main(int argc, char** argv) {

    if(argc != 3) {
        std::cout << "Error: Improper number of arguments\n";
        return 0;
    }

    if(!isNumber(argv[1]) || !isNumber(argv[2])) {
        std::cout << "Error: Inputs are not valid numbers\n";
        return 0;
    }

    double temperature = atof(argv[1]);
    double velocity = atof(argv[2]);

    double windChill = 35.74 + (0.6215 * temperature) + (((0.4275 * temperature) - 35.75) * pow(velocity, 0.16));

    std::cout << windChill;

    return 0;
}

bool isNumber(char* expr) {
    
    int i = 0;

    //Check for negative
    if(expr[i] == '-') {
        i++;
    }

    while(expr[i] != 0) {
        if(!isdigit(expr[i]) && expr[i] != '.') {
            return false;
        }
        i++;
    }
    return true;
}