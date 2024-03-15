#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        if (c >= 65 && c <= 90) {
            printf("ALPHABET\nUPPERCASE\n");
        } else {
            printf("ALPHABET\nLOWERCASE\n");
        }
    } else if (c >= 48 && c <= 57) {
        printf("DIGIT\n");
    } else if (c == 32 || c == 9 || c == 13 || c == 10) {
        printf("SPACE\n");
    } else {
        printf("OTHER\n");
    }

    return 0;
}

