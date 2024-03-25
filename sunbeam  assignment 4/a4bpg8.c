//Write a function to swap two numbers.



#include <stdio.h>

// Function to swap two numbers using pointers
void swapNumbers(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int number1, number2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &number1, &number2);

    printf("Before swapping: number1 = %d, number2 = %d\n", number1, number2);

    swapNumbers(&number1, &number2);

    printf("After swapping: number1 = %d, number2 = %d\n", number1, number2);

    return 0;
}
