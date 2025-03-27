#include <stdio.h>
int main()
{
    int n, k=0,s,r;
    scanf ("%d", &n);
    int arr1[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i=0; i<n; i++)
    {
        int m=arr1[i];
        s=0;
        while (m!=0)
        {
        r=m%10;
        s+=r;
        m/=10;
        }
        printf("%d ", s);
    }
}
