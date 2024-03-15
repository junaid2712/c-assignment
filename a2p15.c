#include <stdio.h>

int dayOfWeek(int d, int m, int y) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int main() {
    int day, month, year;
    
    printf("Enter the date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    
    char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    int dayIndex = dayOfWeek(day, month, year);
    
    printf("The day of the week for %d-%d-%d is %s\n", day, month, year, days[dayIndex]);
    
    return 0;
}
