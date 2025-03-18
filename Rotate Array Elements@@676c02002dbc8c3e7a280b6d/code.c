#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    
    int arr[n], arr2[n];

    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform circular shift
    for (int i = 0; i < n; i++) {
        int t = (i + k) % n;  // This handles the circular shifting
        arr2[i] = arr[t];  // Store the shifted value in arr2
    }

    // Print the shifted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");
    return 0;
}
