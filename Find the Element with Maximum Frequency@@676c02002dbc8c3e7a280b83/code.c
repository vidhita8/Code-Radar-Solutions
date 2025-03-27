#include <stdio.h>
int main()
{
    int n, k=0;
    scanf ("%d", &n);
    int arr1[n], arr2[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (arr1[i]==arr1[j])
            k++;
        }
        arr2[i]=k;
        k=0;
    }
    int max=arr2[0], index=0;
    for (int i=0; i<n; i++)
    {
        if (max>arr2[i])
        {
        max=arr2[i];
        index=i;
        }
    }
    printf("%d", arr1[index]);
}