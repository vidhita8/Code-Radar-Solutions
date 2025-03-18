#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[n], arr2[n];
    for (int i; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i; i<n; i++)
    {
        int t=i+k;
        if(t>n)
        {
            t=t-n;
        }
        arr2[i]=arr[i+k];
    }
    for(int i; i<n; i++)
    {
        printf("%d\n", arr2[i]);
    }
}