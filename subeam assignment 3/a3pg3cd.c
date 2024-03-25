#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum = 0, temp;

    // Accepting the number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Check for numeric palindrome
    int reversedNum = 0;
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a numeric palindrome\n", originalNum);
    } else {
        printf("%d is not a numeric palindrome\n", originalNum);
    }

    // Check for Armstrong number
    num = originalNum;
    int digits = 0;
    while (num != 0) {
        num = num / 10;
        digits++;
    }

    num = originalNum;
    int armstrongSum = 0;
    while (num != 0) {
        remainder = num % 10;
        armstrongSum += pow(remainder, digits);
        num = num / 10;
    }

    if (armstrongSum == originalNum) {
        printf("%d is an Armstrong number\n", originalNum);
    } else {
        printf("%d is not an Armstrong number\n", originalNum);
    }

    return 0;
}
