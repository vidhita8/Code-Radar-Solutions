#include <stdio.h>
int main()
{
    int n,sum;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &sum);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (arr[i]+arr[j]==sum)
            {
                printf("%d %d", arr[i], ar[j]);
            }
        }
        printf("\n");
    }
}