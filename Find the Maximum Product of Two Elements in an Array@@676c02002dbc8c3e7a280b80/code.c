#include <stdio.h>
int main()
{
    int n, k=0;
    scanf ("%d", &n);
    int arr1[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (k<(arr1[1]*arr1[j]))
            k=arr1[1]*arr1[j]
        }
    }
    printf("%d", k);
}