/*Write a function to calculate sum and product into a single function.
a. Using global variables (for result)*/

#include <stdio.h>

// Global variables to store the sum and product
int sum = 0;
int product = 1;

// Function to calculate sum and product using pointers
void calculateSumAndProduct(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
        product *= *(ptr + i);
    }
}

int main() {
    int num1, num2, num3, num4, num5;

    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    calculateSumAndProduct(&num1, 5);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
