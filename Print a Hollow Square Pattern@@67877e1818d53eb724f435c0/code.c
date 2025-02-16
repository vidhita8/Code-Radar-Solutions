#include <stdio.h>

int main() {
    int i, j;
    int n;
    scanf("%d", &n)  // Size of the pattern (4x4 grid)
    
    // Outer loop for each row
    for(i = 1; i <= n; i++) {
        // Inner loop for each column
        for(j = 1; j <= n; j++) {
            // Print stars at the borders (first and last columns)
            if(i == 1 || i == n) {
                printf("*");
            }
            // Print stars in the diagonal (when row and column are the same)
            else if(i == j || j == n - i + 1) {
                printf("*");
            }
            else {
                // Print spaces in the inner part of the pattern
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}