#include <stdio.h>

int main() {
    int arr[6] = {1, 10, 12, 34, 35};  // Already sorted array (array can hold 6 elements)
    int n = 5;  // Current size of the array (5 elements are filled)
    int key = 15;  // New element to be inserted
    int pos = 0;

    // Find the position to insert the new element
    for (int i = 0; i < 5; i++) {
        if (arr[i] > key) {
            pos = i;  // Position where the new element should be inserted
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (int i = 5; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the correct position
    arr[pos] = key;



    // Print the updated array
    printf("Array after inserting %d: ", key);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}