#include <iostream>

int main() {
    double x, y;
    char operation;                 //declaration section

    while (true) {                                  //start of loop
        std::cout << "Enter two numbers (X and Y): ";
        std::cin >> x >> y;

        std::cout << "Choose an operation (+, -, *, /) or 'E' to exit: ";
        std::cin >> operation;

        if (operation == 'E' || operation == 'e') {    			|| -> OR         
            break; // Exit if user enters 'E' or 'e'
        }

        double result;
        // start of IF block checking, goes from first to 4rth else if and last else is for default unknown
        if (operation == '+') {
            result = x + y;
        }
        else if (operation == '-') {
            double temp = x;                //switching so no negative values
            x = y;
            y = temp;
            result = x - y;
        }
        else if (operation == '*') {
            result = x * y;
        }
        else if (operation == '/') {
            if (y != 0) {
                result = x / y;
            } else {
                std::cout << "Division by zero is not allowed." << std::endl;
                continue; // Restart the loop if division by zero 
            }
        }
        else {
            std::cout << "Unknown operator. Please enter +, -, *, /, or 'E' to exit." << std::endl;
        }

        std::cout << "Result: " << result << std::endl;
    }                               //end of while loop

    return 0;
}
