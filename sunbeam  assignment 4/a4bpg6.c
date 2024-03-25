//Write a function to print a given number in hexadecimal format.

#include <stdio.h>

void printHexadecimal(int num) {
    char hex[16] = "0123456789ABCDEF";
    char hexNum[50];
    int i = 0;

    if (num == 0) {
        printf("0x0\n");
        return;
    }

    while (num != 0) {
        int remainder = num % 16;
        hexNum[i++] = hex[remainder];
        num = num / 16;
    }

    printf("0x");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexNum[j]);
    }
    printf("\n");
}

int main() {
    int number = 3055;
    printHexadecimal(number);
    return 0;
}
