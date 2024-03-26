/*Write a function to search the given number into the array using binary search and return the
index of the element. If element is not found it should return -1.*/

#include <stdio.h>

// Function to perform binary search in the sorted array
int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Return the index if element is found
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 if element is not found
}

int main() {
    int size, key;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    int array[size];

    // Accepting sorted array elements
    printf("Enter %d sorted array elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Accepting the number to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Performing binary search
    int index = binarySearch(array, size, key);

    // Displaying the result
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
