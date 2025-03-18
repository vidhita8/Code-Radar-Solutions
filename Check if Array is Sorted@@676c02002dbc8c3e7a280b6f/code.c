#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element of the array
    }

    // Print the array to check if it's correct
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}