/*Write a function to sort array of student’s information by roll number. Write another function to
sort student’s information by name.*/

#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
};

void sortByRollNumber(struct Student *students, int size) {
    struct Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((students + j)->rollNumber > (students + j + 1)->rollNumber) {
                temp = *(students + j);
                *(students + j) = *(students + j + 1);
                *(students + j + 1) = temp;
            }
        }
    }
}

void sortByName(struct Student *students, int size) {
    struct Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp((students + j)->name, (students + j + 1)->name) > 0) {
                temp = *(students + j);
                *(students + j) = *(students + j + 1);
                *(students + j + 1) = temp;
            }
        }
    }
}

int main() {
    struct Student students[] = {
        {101, "Abd"},
        {103, "Bavuma"},
        {102, "Ellyse perry"},
        {105, "Dev"},
        {104, "Chand"}
    };
    int size = sizeof(students) / sizeof(students[0]);

    // Sort by roll number
    sortByRollNumber(students, size);
    printf("Sorted by Roll Number:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll Number: %d, Name: %s\n", students[i].rollNumber, students[i].name);
    }

    // Sort by name
    sortByName(students, size);
    printf("\nSorted by Name:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll Number: %d, Name: %s\n", students[i].rollNumber, students[i].name);
    }

    return 0;
}
