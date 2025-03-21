#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i!=j)
            {
            if (arr[i]==arr[j])
                k=arr[i];
            }
        }
    }
    printf("%d", k);
}