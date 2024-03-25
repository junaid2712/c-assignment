//Write a function in c using iteration to calculate factorial of a given number.


#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    unsigned long long result = 1;
    
    if (n == 0 || n == 1) {
        return 1;
    } else {
        for (unsigned int i = 2; i <= n; i++) {
            result *= i;
        }
    }
    
    return result;
}

int main() {
    unsigned int number;
    
    printf("Enter a number: ");
    scanf("%u", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %u is %llu\n", number, factorial(number));
    }
    
    return 0;
}

