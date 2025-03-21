#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (arr[i]==arr2[j])
            arr2[j]==arr[i];
        }
    }
    
}