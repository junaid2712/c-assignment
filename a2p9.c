#include <stdio.h>

int main() {
    int month, year;
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Number of days in the month %d of year %d is 31\n", month, year);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Number of days in the month %d of year %d is 30\n", month, year);
    } else if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            printf("Number of days in the month %d of year %d is 29\n", month, year);
        } else {
            printf("Number of days in the month %d of year %d is 28\n", month, year);
        }
    } else {
        printf("Invalid month\n");
    }
    return 0;
}
