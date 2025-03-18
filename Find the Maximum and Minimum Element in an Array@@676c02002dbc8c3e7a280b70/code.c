// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i=0; i<n; i++)
//     {
//         printf("%d\n", &arr[i]);
//     }
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read number of elements
    int arr[n];
    
    // Read space-separated elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Output array to verify input
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
