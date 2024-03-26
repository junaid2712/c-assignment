//Write a function to calculate maximum and minimum of the array elements.


#include <stdio.h>

// Function to calculate the maximum and minimum of array elements
void calculateMinMax(int arr[], int size, int *max, int *min) {
    *max = arr[0]; // Initialize max with the first element
    *min = arr[0]; // Initialize min with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
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
    int max, min;

    // Accepting array elements
    printf("Enter %d array elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Printing array elements
    printArrayElements(array, size);

    // Calculating maximum and minimum of array elements
    calculateMinMax(array, size, &max, &min);

    // Displaying the maximum and minimum elements
    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}
