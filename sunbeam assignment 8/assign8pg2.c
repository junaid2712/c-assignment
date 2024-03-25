/*Write a function to accept student information from the user.
Write another function to print
student’s information. Re-use these functions in rest of the assignments wherever required.*/

#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to input student information
void inputStudentInfo(struct Student *student) {
    printf("Enter Roll Number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter Name: ");
    scanf("%s", student->name);

    printf("Enter Marks: ");
    scanf("%f", &student->marks);
}

// Function to display student information
void displayStudentInfo(struct Student student) {
    printf("\nStudent Information\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    struct Student student;

    // Input student information
    inputStudentInfo(&student);

    // Display student information
    displayStudentInfo(student);

    return 0;
}
