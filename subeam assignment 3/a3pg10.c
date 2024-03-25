/*Write a program to accept integer values of base and index and calculate power of base to
index.*/

#include <stdio.h>

int main() {
    int base, index, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter index: ");
    scanf("%d", &index);

    for (int i = 1; i <= index; i++) {
        result *= base;
    }

    printf("Result: %d\n", result);

    return 0;
}
