#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[n], arr2[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        int t=(i+k)%n;
        arr2[i]=arr[t];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr2[i]);
    }
}
