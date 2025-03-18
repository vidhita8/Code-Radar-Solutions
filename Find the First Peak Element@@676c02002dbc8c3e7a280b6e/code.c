// #include <stdio.h>

// int main()
// {
//     int n,k=0;
//     scanf("%d", &n);
//     int arr[n];
//     arr[0]=0;
//     arr[n+1]=0;
//     for (int i = 1; i < n+1; i++) {
//         scanf("%d", &arr[i]);  
//     }
//     for (int i=1; i<n; i++)
//     {
//         if ((arr[i]>arr[i-1]) && (arr[i]>arr[i+1]))
//         {
//         printf("%d", arr[i]);
//         break;
//         }
//         else
//         {
//         printf("-1");
//         break;
//         }
//     }
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (n == 1) {
        // If there is only one element, it's trivially a "local maximum"
        printf("%d\n", arr[0]);
        return 0;
    }
    
    if (n == 2) {
        // If there are only two elements, check if either is greater than the other
        if (arr[0] > arr[1]) {
            printf("%d\n", arr[0]);
        } else if (arr[1] > arr[0]) {
            printf("%d\n", arr[1]);
        } else {
            // If both elements are equal, print -1
            printf("-1\n");
        }
        return 0;
    }
    
    // Check for local maximum in the array (from 1 to n-2)
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            return 0;  // Exit once we find the first local maximum
        }
    }
    
    // If no local maximum is found
    printf("-1\n");
    return 0;
}
