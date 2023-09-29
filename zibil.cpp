#include <iostream>

class Calculator {
public:
    float add(float a, float b) {
        return a + b;
    }

    float subtract(float a, float b) {
        return a - b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: Division by zero" << std::endl;
            return 0;
        }
    }
};

int main() {
    Calculator calculator;

    float num1 = 10.5f;  // Preset first number as a float
    float num2 = 5.2f;   // Preset second number as a float

    float result_add = calculator.add(num1, num2);
    float result_sub = calculator.subtract(num1, num2);
    float result_mul = calculator.multiply(num1, num2);
    float result_div = calculator.divide(num1, num2);

    std::cout << "Addition: " << result_add << std::endl;
    std::cout << "Subtraction: " << result_sub << std::endl;
    std::cout << "Multiplication: " << result_mul << std::endl;
    std::cout << "Division: " << result_div << std::endl;

    return 0;
}
