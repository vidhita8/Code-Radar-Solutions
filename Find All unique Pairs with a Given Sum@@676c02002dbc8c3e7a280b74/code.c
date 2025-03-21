#include <stdio.h>
int main()
{
    int n,sum,first, second;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &sum);
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i]+arr[j]==sum)
            {
                if ((first!=arr[i])&&(second!=arr[j]))
                {
                first=arr[i];
                second=arr[j];
                printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }
}