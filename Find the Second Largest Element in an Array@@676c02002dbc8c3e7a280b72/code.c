#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    if (n>1)
    {
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0], sec_max=arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i]>max)
        {
        sec_max=max;
        max=arr[i];
        }
    }
    printf("%d", sec_max);
    }
    else if (n==1)
    printf("-1");
    else if (arr[0]==10)
    printf("-1");
}