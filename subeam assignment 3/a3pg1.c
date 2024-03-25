//Write a program to accept a character and a number, and print the character number times
#include <stdio.h>

int main() {
    char character;
    int number, count = 0;

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("Enter a number: ");
    scanf("%d", &number);

    while (count < number) {
        printf("%c", character);
        count++;
    }

    return 0;
}
