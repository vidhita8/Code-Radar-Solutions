// #include <stdio.h>
// int main()
// {
//     int n,k=0,counter=0,rm,m;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i=0; i<n-1; i++)
//     {
//         if ((arr[i]>=arr[i+1]) || (arr[i]<=arr[i+1]))
//         counter++;
//     }
//     if (counter==n)
//     {
//         printf("YES");
//     }
//     else
//     printf("NO");
// }

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int increasing = 1, decreasing = 1;

    // Check if the array is non-decreasing or non-increasing
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            decreasing = 0;  // If found increasing, mark decreasing as false
        } else if (arr[i] > arr[i + 1]) {
            increasing = 0;  // If found decreasing, mark increasing as false
        }
    }

    // If either increasing or decreasing is true, it's a monotonic array
    if (increasing || decreasing) {
        printf("The array is monotonic.\n");
    } else {
        printf("The array is not monotonic.\n");
    }

    return 0;
}
