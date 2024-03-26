/*Write a function to remove duplicate elements from the array. After processing the array should
store only the unique elements consecutively. Also function should return the number of unique
elements into the array.*/

#include <stdio.h>

// Function to remove duplicate elements from the array
int removeDuplicates(int arr[], int size) {
    int uniqueCount = 0;

    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (i == j) {
            arr[uniqueCount++] = arr[i];
        }
    }

    return uniqueCount;
}

// Function to print array elements
void printArrayElements(int arr[], int size) {
    printf("Unique Array elements:\n");
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

    // Removing duplicate elements
    int uniqueCount = removeDuplicates(array, size);

    // Printing unique array elements
    printArrayElements(array, uniqueCount);

    // Displaying the number of unique elements
    printf("Number of unique elements: %d\n", uniqueCount);

    return 0;
}
