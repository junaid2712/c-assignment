/*Write a function in c using iteration to
calculate factorial of a given number using recursion.*/

#include <stdio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    } else {
        int result = 1;
        for(int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int num;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}
