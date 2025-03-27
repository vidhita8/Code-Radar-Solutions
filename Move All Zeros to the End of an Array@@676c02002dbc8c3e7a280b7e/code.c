#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index = 0;  // This will track the next position to place non-zero elements

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // If the current element is non-zero, place it at the 'index' position
            arr[index] = arr[i];
            index++;  // Increment the index to place the next non-zero element
        }
    }

    // After moving all non-zero elements, fill the remaining positions with zero
    for (int i = index; i < n; i++) {
        arr[i] = 0;
    }

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
