#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array

    if (n > 1) {
        int arr[n];

        // Input the array elements
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Initialize max and sec_max with the smallest possible integer value
        int max = INT_MIN, sec_max = INT_MIN;

        // Find the largest and second largest numbers
        for (int i = 0; i < n; i++) {
            if (arr[i] > max) {
                sec_max = max;  // Update second largest before max
                max = arr[i];   // Update max
            } else if (arr[i] > sec_max && arr[i] < max) {
                sec_max = arr[i];  // Update second largest
            }
        }

        if (sec_max == INT_MIN) {
            printf("-1");  // If no second largest is found (all numbers are the same)
        } else {
            printf("%d", sec_max);  // Output the second largest number
        }
    } else {
        printf("-1");  // If there's less than two elements
    }

    return 0;
}
