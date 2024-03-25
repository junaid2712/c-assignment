//Write a function to print a given number in binary format.

#include <stdio.h>

void printBinary(int num) {
    int binary[32]; // Assuming 32-bit integer
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printBinary(number);

    return 0;
}
