/*Write a function to calculate sum and product into a single function
 Without using global variables*/

#include <stdio.h>

// Function to calculate sum and product using pointers
void calculateSumAndProduct(int *ptr, int size, int *sum, int *product) {
    *sum = 0;
    *product = 1;

    for (int i = 0; i < size; i++) {
        *sum += *(ptr + i);
        *product *= *(ptr + i);
    }
}

int main() {
    int num1, num2, num3, num4, num5;
    int sum, product;

    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    calculateSumAndProduct(&num1, 5, &sum, &product);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
