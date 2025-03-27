#include <stdio.h>
int main()
{
    int n, k=0;
    scanf ("%d", &n);
    int arr1[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i=0; i<n-1; i++)
    {
        int m=arr1[i];
        int s=0,r;
        while (m!=0);
        {
        r=m%10;
        s+=r;
        m/=10;
        }
        printf("%d ", s);
    }
}
