/*Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.*/

#include <stdio.h>

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
                printf("Error: Division by zero\n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 0; 
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

    printf("Result: %.2f\n", result);

    return 0;
}
