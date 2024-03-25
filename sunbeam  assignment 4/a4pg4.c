

#include <stdio.h>

int error_flag = 0; // Global error flag

float calculator(float operand1, float operand2, char operator) {
    float result;

    switch(operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if(operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: cant divide by zero\n");
                error_flag = 1; // Set error flag to 1
                return 0; // Return 0 in case of division by zero
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            error_flag = 1; // Set error flag to 1
            return 0; // Return 0 for invalid operator
    }

    return result;
}

int main() {
    float operand1, operand2, result;
    char operator;

    printf("Enter first operand: ");
    scanf("%f", &operand1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second operand: ");
    scanf("%f", &operand2);

    result = calculator(operand1, operand2, operator);

    if(error_flag == 0) {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
