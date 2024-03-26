/*Write a function to calculate maximum of the array elements. Write another function to
calculate maximum of the array elements.*/

#include <stdio.h>

// Function to calculate the maximum of array elements
int calculateMax(int arr[], int size) {
    int max = arr[0]; // Initialize max with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

// Function to print array elements
void printArrayElements(int arr[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Accepting array elements
    printf("Enter %d array elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Printing array elements
    printArrayElements(array, size);

    // Calculating maximum of array elements
    int max = calculateMax(array, size);

    // Displaying the maximum element
    printf("Maximum element in the array: %d\n", max);

    return 0;
}
