/*Write a structure to store school student information. The student result is one of the members
of this information. Note that till 4th standard school follows grade scheme (A / B / C) and after
4th standard it follows percentage pattern. Accept the information of 3 students from the user
and display it again*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int standard;
    char result[5]; // For grades (A/B/C) or percentage
};

int main() {
    struct Student *students = (struct Student *)malloc(3 * sizeof(struct Student));

    for (int i = 0; i < 3; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", (students + i)->name);
        printf("Standard: ");
        scanf("%d", &(students + i)->standard);

        if ((students + i)->standard <= 4) {
            printf("Grade (A/B/C): ");
            scanf("%s", (students + i)->result);
        } else {
            printf("Percentage: ");
            scanf("%s", (students + i)->result);
        }
    }

    printf("\nDisplaying student information:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", (students + i)->name);
        printf("Standard: %d\n", (students + i)->standard);

        if ((students + i)->standard <= 4) {
            printf("Grade: %s\n", (students + i)->result);
        } else {
            printf("Percentage: %s\n", (students + i)->result);
        }
    }

    free(students); // Free dynamically allocated memory

    return 0;
}
