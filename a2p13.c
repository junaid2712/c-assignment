#include <stdio.h>

// Function prototypes
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    float num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(operator) {
        case '+':
            printf("Result: %.2f\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %.2f\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %.2f\n", multiply(num1, num2));
            break;
        case '/':
            if(num2 != 0) {
                printf("Result: %.2f\n", divide(num1, num2));
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator entered.\n");
    }

    return 0;
}

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1-num2 ;
	}
float multiply(float num1, float num2) {
return num1*num2;}

float divide(float num1, float num2) {
return num1/num2;}




