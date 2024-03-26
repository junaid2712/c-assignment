/*Write a program in c using 1 d array to accept marks of five subjects,
calculate its total and average.*/


#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float average;

    // Accepting marks for five subjects
    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculating total and average
    average = (float)total / 5;

    // Displaying total and average
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}
