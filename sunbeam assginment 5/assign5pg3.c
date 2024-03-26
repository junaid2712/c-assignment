//Write a function in c using 1 d array to reverse the array elements.

#include <stdio.h>

// Function to reverse array elements
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to print array elements
void printArrayElements(int arr[], int size) {
    printf("Reversed Array elements:\n");
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

    // Reversing array elements
    reverseArray(array, size);

    // Printing reversed array elements
    printArrayElements(array, size);

    return 0;
}
