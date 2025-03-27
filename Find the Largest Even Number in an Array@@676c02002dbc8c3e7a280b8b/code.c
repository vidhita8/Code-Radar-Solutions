#include <stdio.h>
int main()
{
    int n,k=0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i]%2==0)
        {k++;
            if (arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    if (k!=0)
    printf("%d", max);
    else
    printf("-1");
}