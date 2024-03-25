#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Unique pairs of numbers such that their multiplication is %d:\n", num);
    while (i <= num / 2) {
        if (num % i == 0) {
            printf("%d * %d = %d\n", i, num / i, num);
        }
        i++;
    }

    return 0;
}
