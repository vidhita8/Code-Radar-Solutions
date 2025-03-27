#include <stdio.h>
int main()
{
    int n, min,sec_min, nn=0;
    scanf("%d", &n);
    int arr[n];
    if (n>1)
    {
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
        else if (arr[i] < sec_min && arr[i] != min) 
        {
            sec_min = arr[i];
        }
    }
    printf("%d", sec_min);
    }
    else
    printf("-1");
}