#include <stdio.h>
int main()
{
    int n, max;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n-1; i++)
    {
        max=arr[i+1];
        for (int j=i; j<n; j++)
        {
            if (max>arr[j])
            max=arr[j];
        }
        printf("%d ", max);
    }
}