#include <iostream>

bool isNumber(char* expr);

/**
 * Determines if a set of four integers are in ascending or descending order or not
 * 
 * Accepts four arguments:
 *  int number1
 *  int number2
 *  int number3
 *  int number4
 * 
 * Prints 1 if in ascending or descending order, 0 otherwise
 **/
int main (int argc, char** argv) {

    if(argc != 5) {
        std::cout << "Error: Improper number of arguments\n";
        return 0;
    }

    if(!isNumber(argv[1]) || !isNumber(argv[2]) || !isNumber(argv[3]) || !isNumber(argv[4])) {
        std::cout << "Error: Inputs are not valid numbers\n";
        return 0;
    }

    //Ascending
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);
    int num4 = atoi(argv[4]);

    bool ascOrDesc = ((num1 < num2) && (num2 < num3) && (num3 < num4) || (num1 > num2) && (num2 > num3) && (num3 > num4));

    std::cout << ascOrDesc;

}

bool isNumber(char* expr) {
    
    int i = 0;

    //Check for negative
    if(expr[i] == '-') {
        i++;
    }

    while(expr[i] != 0) {
        if(!isdigit(expr[i])) {
            return false;
        }
        i++;
    }
    return true;
}