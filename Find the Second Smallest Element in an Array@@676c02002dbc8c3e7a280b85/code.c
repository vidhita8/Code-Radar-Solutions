#include <stdio.h>
int main()
{
    int n, min,sec_min;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min=sec_min=arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i]<min)
        {
            sec_min=min;
            min=arr[i];
        }
    }
    printf("%d", sec_min);
}