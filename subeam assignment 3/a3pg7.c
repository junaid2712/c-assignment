#include <stdio.h>

int main() {
    int num, i = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d = ", num);

    while (num > 1) {
        if (num % i == 0) {
            printf("%d", i);
            num /= i;
            if (num > 1) {
                printf(" * ");
            }
        } else {
            i++;
        }
    }

    return 0;
}
