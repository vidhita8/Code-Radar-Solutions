#include <stdio.h>
int main()
{
    int n, s=0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        s=s+arr[i];
        printf("%d ", s);
    }
}