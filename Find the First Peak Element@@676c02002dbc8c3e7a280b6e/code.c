#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements (usually provided in the first line)
    scanf("%d", &n);  
    
    int arr[n];
    
    // Read the array elements, one per line
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Optionally, print the array to verify input (for debugging purposes)
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
