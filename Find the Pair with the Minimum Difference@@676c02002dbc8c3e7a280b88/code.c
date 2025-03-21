// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, diff=100000, first=0,second=0;
//     scanf("%d", &n);
//     int arr[n];
//     if (n>1)
//     {
//     for (int i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if (abs(arr[i]-arr[j])<diff)
//             diff=abs(arr[i]-arr[j]);
//             first=arr[i];
//             second=arr[j];
//         }
//     }
//     if (first>second)
//     {
//         printf("%d %d",second, first);
//     }
//     else if (second>first)
//     {
//         printf("%d %d",first, second);
//     }
//     }
//     else
//     {
//         printf("-1");
//     }
// }
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, diff = 100000, first = 0, second = 0;
    scanf("%d", &n);

    if (n <= 1) // If there's 1 or fewer elements, print -1
    {
        printf("-1");
        return 0;
    }

    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find the pair with the smallest absolute difference
    for (int i = 0; i < n - 1; i++) // Loop through each element
    {
        for (int j = i + 1; j < n; j++) // Compare with each subsequent element
        {
            int current_diff = abs(arr[i] - arr[j]); // Calculate absolute difference

            // If a smaller difference is found, update first, second, and diff
            if (current_diff < diff)
            {
                diff = current_diff; // Update the smallest difference
                first = arr[i]; // Store the first element of the pair
                second = arr[j]; // Store the second element of the pair
            }
            // If the difference is the same but the numbers are smaller, update the pair
            else if (current_diff == diff)
            {
                if (arr[i] < first || (arr[i] == first && arr[j] < second))
                {
                    first = arr[i];
                    second = arr[j];
                }
            }
        }
    }

    // Print the pair with the smallest difference in sorted order
    if (first > second)
    {
        printf("%d %d", second, first);
    }
    else
    {
        printf("%d %d", first, second);
    }

    return 0;
}

