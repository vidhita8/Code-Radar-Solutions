// #include <stdio.h>
// int main()
// {
//     int n, k=0;
//     scanf ("%d", &n);
//     int arr1[n], arr2[n];
//     for (int i=0; i<n; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     for (int i=0; i<n-1; i++)
//     {k=0;
//         for (int j=0; j<n; j++)
//         {
//             if (arr1[i]==arr1[j])
//             k++;
//         }
//         arr2[i]=k;
//         k=0;
//     }
//     int max=arr2[0], index=0;
//     for (int i=0; i<n; i++)
//     {
//         if (max>arr2[i])
//         {
//         max=arr2[i];
//         index=i;
//         }
//     }
//     printf("%d", arr1[index]);
// }

#include <stdio.h>

int main() {
    int n, k = 0, max = 0, index = 0;
    scanf("%d", &n);
    int arr1[n], arr2[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Count occurrences of each element
    for (int i = 0; i < n; i++) {
        k = 1;  // Start with a count of 1 for the current element
        if (arr2[i] != -1) {  // Skip already counted elements
            for (int j = i + 1; j < n; j++) {
                if (arr1[i] == arr1[j]) {
                    k++;  // Increment the count for the duplicate elements
                    arr2[j] = -1;  // Mark this element as counted
                }
            }
            arr2[i] = k;  // Store the count for the current element
        }
    }

    // Find the most frequent element
    for (int i = 0; i < n; i++) {
        if (arr2[i] > max) {
            max = arr2[i];
            index = i;
        }
    }

    // Output the most frequent element
    printf("%d", arr1[index]);

    return 0;
}
