#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder, original_num;

    // Input a 5 digit number
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    original_num = num;
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    if (original_num == reversed_num)
        printf("%d is a numeric palindrome.\n", original_num);
    else
        printf("%d is not a numeric palindrome.\n", original_num);

    return 0;
}
