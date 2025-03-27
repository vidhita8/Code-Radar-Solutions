#include <stdio.h>
int main()
{
    int n,k=0,counter=0,rm,m;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        int m=arr[i];
        while (m!=0)
        {
            k=m%10;
            rm=rm*10+k;
            m=m/10;
        }
        if (rm=arr[i])
        counter++;
    }
    printf("%d", counter);
}