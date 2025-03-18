#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element of the array
    }
    for (int i=0; i<n; i++)
    {
        if (arr[i]>arr[i+1])
        printf("Not Sorted")
        else
        printf("Sorted")
    }

}