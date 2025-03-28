#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array

    if (n > 1) {
        int arr[n];
        
        // Input the array elements
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int max = arr[0], sec_max = -1;

        // Find the largest and second largest numbers
        for (int i = 1; i < n; i++) {  // Start from index 1 since we've already assigned max from arr[0]
            if (arr[i] > max) {
                sec_max = max;  // Update second largest before max
                max = arr[i];   // Update max
            } else if (arr[i] > sec_max && arr[i] < max) {
                sec_max = arr[i];  // Update second largest
            }
        }

        if (sec_max == -1) {
            printf("-1");  // If no second largest is found
        } else {
            printf("%d", sec_max);  // Output the second largest number
        }
    } else {
        printf("-1");  // If there's less than two elements
    }

    return 0;
}
