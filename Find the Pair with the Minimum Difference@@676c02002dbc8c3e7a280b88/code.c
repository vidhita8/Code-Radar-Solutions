#include <stdio.h>
int main()
{
    int n, diff=100000, first,second;
    scanf("%d", &n);
    int arr[n];
    if (n>1)
    {
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (arr[i]-arr[j]<diff)
            first=arr[i];
            second=arr[j];
        }
    }
    if (first>second)
    {
        printf("%d %d", first, second);
    }
    else if (second>first)
    {
        printf("%d %d", second, first);
    }
    }
    else
    {
        printf("-1");
    }
}