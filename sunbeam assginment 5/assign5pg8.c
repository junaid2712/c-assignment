/*Write a function to search the given number into the array using linear search and return the
index of the element. If element is not found it should return -1.*/

#include <stdio.h>

// Function to perform linear search in the array
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Accepting array elements
    printf("Enter %d array elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Accepting the number to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Performing linear search
    int index = linearSearch(array, size, key);

    // Displaying the result
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
