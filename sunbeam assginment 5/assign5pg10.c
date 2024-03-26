/*Write a function to search the given number into the array using linear search and return the
address of the element. If element is not found it should return NULL.*/

#include <stdio.h>

// Function to perform linear search in the array and return the address of the element
int* linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return &arr[i]; // Return the address of the element if found
        }
    }
    return NULL; // Return NULL if element is not found
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
    int* address = linearSearch(array, size, key);

    // Displaying the result
    if (address != NULL) {
        printf("Element found at address: %p\n", (void*)address);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
