#include <stdio.h>

// Function to implement simple calculator using switch statement
double simpleCalc(double num1, double num2, char op) {
    double result;
    // Perform the corresponding operation using switch-case
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.\n");
                return 0;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 0;
    }
    return result;
}

int main() {
    char op;
    double num1, num2;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    // Read the two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    double result = simpleCalc(num1, num2, op);
    printf("Result: %.2lf\n", result);

    return 0;
}
