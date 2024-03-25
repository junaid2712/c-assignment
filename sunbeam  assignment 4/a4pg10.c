/*Write function to check whether given year is leap or not. Write another function to print
number of days in given month.*/

#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year) {
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

int daysInMonth(int month, int year) {
    int days;

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if(isLeapYear(year)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            days = -1; // Invalid month
    }

    return days;
}

int main() {
    int year, month;

    printf("Enter a year to check if it is a leap year: ");
    scanf("%d", &year);

    if(isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    printf("Enter a month (1-12) and year to get the number of days: ");
    scanf("%d %d", &month, &year);

    int numDays = daysInMonth(month, year);

    if(numDays == -1) {
        printf("Invalid month entered.\n");
    } else {
        printf("Number of days in month %d of year %d: %d\n", month, year, numDays);
    }

    return 0;
}
