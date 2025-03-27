#include <stdio.h>
int main()
{
    int n,k, j=0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (arr[i]>k)
        j++;
    }
    printf("%d", j);
}