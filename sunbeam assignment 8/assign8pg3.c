/*Write a function to accept array of student’s information from the user. Write another function
to print the array student’s information. Re-use these functions in rest of the assignments
wherever required.*/

#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to input array of student information
void inputStudentArray(struct Student students[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
        printf("Enter Roll Number for student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);

        printf("Enter Name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter Marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }
}

// Function to display array of student information
void displayStudentArray(struct Student students[], int size) 
{
    printf("\nStudent Information\n");
    for (int i = 0; i < size; i++) 
	{
        printf("Student %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    
	}
}

int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student students[size];

    // Input array of student information
    inputStudentArray(students, size);

    // Display array of student information
    displayStudentArray(students, size);

    return 0;

}
