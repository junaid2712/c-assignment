/*Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range.*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimesInRange(int start, int end) {
    printf("Prime numbers in the range %d to %d are:\n", start, end);
    for(int i = start; i <= end; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num, start, end;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if(isPrime(num)) {
        printf("%d is a prime number.\n");
    } else {
        printf("%d is not a prime number.\n");
    }

    printf("Enter the range to find prime numbers (start end): ");
    scanf("%d %d", &start, &end);

    printPrimesInRange(start, end);

    return 0;
}
