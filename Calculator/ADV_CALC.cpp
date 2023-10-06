#include <iostream>

int main() {
    // Declaration section
    double x, y;
    char operation;
    // Loop to check if X>Y and Exit option
    while (true) {
        std::cout << "Enter two numbers (X and Y): ";
        std::cin >> x >> y;

        std::cout << "Choose an operation (+, -, *, /) or 'q' to quit: ";
        std::cin >> operation;          

        if (operation == 'q') {
            break; // Exit if user enters 'q'
        }

        // Reassign x and y if x is less than y by assigning to variable temp the value of X, then reassigning X value to Y and Y to Temp
        if (x < y) {
            double temp = x;
            x = y;
            y = temp;
        }
            //Switch case for Operation depending on user Input
        double result;
        switch (operation) {
            case '+':
                result = x + y;
                break;
            case '-':
                result = x - y;
                break;
            case '*':
                result = x * y;
                break;
            case '/':
            //Condition to check to not allow division by 0, breaks and restarts loop
                if (y != 0) {
                    result = x / y;
                } else {
                    std::cout << "Division by zero is not allowed." << std::endl;
                    continue; // Restart the loop if division by zero
                }
                break;
                //default to restart loop if users enters non accepted operation
            default:
                std::cout << "Invalid operation. Please enter +, -, *, /, or 'q' to quit." << std::endl;
                continue; // Restart the loop for invalid input
        }

        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}
