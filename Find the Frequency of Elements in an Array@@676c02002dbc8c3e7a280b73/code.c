#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array
    
    int arr[n];  // Declare the input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read the elements of the array
    }

    int arr2[n];  // Array to store the frequency of each element
    for (int i = 0; i < n; i++) {
        arr2[i] = -1;  // Initialize arr2[] to -1, indicating that no element's frequency is counted yet
    }

    // Count frequencies and store them in arr2
    for (int i = 0; i < n; i++) {
        if (arr2[i] == -1) {  // If the element is not yet counted
            int count = 1;  // Start the count at 1 since we've found this element once
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;  // Increment the count for matching elements
                    arr2[j] = 0;  // Mark as visited
                }
            }
            arr2[i] = count;  // Store the count of the current element
        }
    }

    // Print the elements and their frequencies
    for (int i = 0; i < n; i++) {
        if (arr2[i] != 0) {  // Print only unvisited elements
            printf("%d %d\n", arr[i], arr2[i]);
        }
    }

    return 0;
}
