/*Write a function to implement four function calculator. The return value indicates the error (due
to zero denominator in case of division). The result is returned via out-parameter.*/

#include <stdio.h>
#include <stdbool.h>

// Function to perform addition
int add(int num1, int num2, int *result) {
    *result = num1 + num2;
    return 0; // No error
}

// Function to perform subtraction
int subtract(int num1, int num2, int *result) {
    *result = num1 - num2;
    return 0; // No error
}

// Function to perform multiplication
int multiply(int num1, int num2, int *result) {
    *result = num1 * num2;
    return 0; // No error
}

// Function to perform division
int divide(int num1, int num2, int *result) {
    if (num2 == 0) {
        return 1; // Error: Division by zero
    } else {
        *result = num1 / num2;
        return 0; // No error
    }
}

int main() {
    int num1, num2, operation, result;
    bool error = false;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Select operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            error = add(num1, num2, &result);
            break;
        case 2:
            error = subtract(num1, num2, &result);
            break;
        case 3:
            error = multiply(num1, num2, &result);
            break;
        case 4:
            error = divide(num1, num2, &result);
            break;
        default:
            printf("Invalid operation selected.\n");
            return 1;
    }

    if (error) {
        printf("Error: Division by zero\n");
    } else {
        printf("Result: %d\n", result);
    }

    return 0;
}
