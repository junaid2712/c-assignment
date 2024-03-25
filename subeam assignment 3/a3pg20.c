#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int givenNumber, count = 0, currentNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &givenNumber);

    printf("First 5 prime numbers after %d are: ", givenNumber);
    
    while (count < 5) {
        currentNumber++;
        if (currentNumber <= givenNumber) {
            continue;
        }
        if (isPrime(currentNumber)) {
            printf("%d ", currentNumber);
            count++;
        }
    }

    return 0;
}
