include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    // Accepting the number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculating sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits of %d = %d\n", originalNum, sum);

    // Reversing the number
    int reversedNum = 0;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }

    printf("Reversed number of %d = %d\n", originalNum, reversedNum);

    return 0;
}
