/*Declare a structure in c  to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same*/

#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student student;

    // Accepting information of student from user
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    // Printing the information of the student
    printf("\nStudent Information\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
