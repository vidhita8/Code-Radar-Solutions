#include <stdio.h>
int main()
{
    int n, count=0, count1=0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (arr[i]==arr[j])
            count1++;
        }
        if (count1>count)
        {
            count=count1;
            count1=0;
        }
    }
    printf("%d", &count);
}