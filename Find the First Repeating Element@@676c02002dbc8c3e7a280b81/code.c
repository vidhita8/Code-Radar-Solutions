#include <stdio.h>
int main()
{
    int n, k=0;
    scanf ("%d", &n);
    int arr1[n], arr2[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i=0; i<n-1; i++)
    {
        for (int j=i; j<n; j++)
        {
        if (arr1[i]==arr1[j])
        {
            printf("%d", arr1[i]);
            k++;
            return 0;
        }
        }
    }
    if (k==0)
    printf("-1");
}