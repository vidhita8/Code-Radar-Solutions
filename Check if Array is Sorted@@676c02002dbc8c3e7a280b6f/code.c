#include <stdio.h>

int main()
{
    int n,k=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element of the array
    }
    for (int i=0; i<n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            k++
        }
    }
    if k==0
        printf("Sorted");
    else
    printf("Not Sorted");
    }

