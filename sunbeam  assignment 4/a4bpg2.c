//Write a function to calculate power using recursion.

#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent number: ");
    scanf("%d", &exponent);

    printf("%d raised to the power of %d is: %d\n", base, exponent, power(base, exponent));

    return 0;
}
