#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;

    // Accepting a number from the user
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    // Calculating the factorial using a for loop
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Outputting the factorial of the given number
    printf("Factorial of %d = %llu\n", number, factorial);

    return 0;
}
