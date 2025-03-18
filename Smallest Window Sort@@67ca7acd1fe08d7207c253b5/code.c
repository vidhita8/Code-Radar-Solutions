// int findUnsortedSubarray(int arr[], int n)
// {
//     int k=0;
//     int arr2[n];
//     for (int i = 0; i < n-1; i++)
//     {
//         arr2[i]=arr[i];
//     }    
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             // Swap if the element is greater than the next element
//             if (arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for (int i=0; i<n; i++)
//     {
//         if (arr[i]!=arr2[i])
//         {
//             k++;
//         }
//     }
//     return k;
// }
#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;

    // Find the first element that is out of order from the left
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If no such element is found, the array is already sorted
    if (start == -1) return 0;

    // Find the first element that is out of order from the right
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find the minimum and maximum values in the unsorted subarray
    int min_val = arr[start], max_val = arr[start];
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    // Extend the range to include any elements outside the unsorted subarray
    for (int i = 0; i < start; i++) {
        if (arr[i] > min_val) {
            start = i;
            break;
        }
    }

    for (int i = n - 1; i > end; i--) {
        if (arr[i] < max_val) {
            end = i;
            break;
        }
    }

    return end - start + 1; // Return the length of the unsorted subarray
}

