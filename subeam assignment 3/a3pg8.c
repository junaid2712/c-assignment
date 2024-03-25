#include <stdio.h>

int main() {
    int number, i;

    // Accepting a number from the user
    printf("Enter a number to print its table: ");
    scanf("%d", &number);

    // Using a for loop to print the table of the given number
    printf("Table of %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
