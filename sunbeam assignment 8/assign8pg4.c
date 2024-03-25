/*Write a function to search student’s information by roll number. Write another function to
search student’s information by name. (linear search)*/

#include <stdio.h>
#include <string.h>

// Define a structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to search student information by roll number using linear search
void searchByRollNumber(struct Student students[], int size, int rollNum) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (students[i].rollNumber == rollNum) {
            printf("\nStudent Information found by Roll Number %d\n", rollNum);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with Roll Number %d not found.\n", rollNum);
    }
}

// Function to search student information by name using linear search
void searchByName(struct Student students[], int size, char *searchName) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("\nStudent Information found by Name: %s\n", searchName);
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
        }
    }
    if (!found) {
        printf("\nStudent with Name %s not found.\n", searchName);
    }
}

int main() {
    struct Student students[3] = {{101, "abc", 85.5}, {102, "pqr", 78.3}, {103, "xyz", 92.0}};
    int size = 3;

    // Search student information by roll number
    int rollNum;
    printf("Enter Roll Number to search: ");
    scanf("%d", &rollNum);
    searchByRollNumber(students, size, rollNum);

    // Search student information by name
    char searchName[50];
    printf("Enter Name to search: ");
    scanf("%s", searchName);
    searchByName(students, size, searchName);

    return 0;
}
