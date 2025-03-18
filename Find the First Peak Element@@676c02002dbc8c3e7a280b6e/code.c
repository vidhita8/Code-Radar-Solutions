#include <stdio.h>

int main()
{
    int n,k=0;
    scanf("%d", &n);
    int arr[n];
    arr[0]=0;
    arr[n+1]=0;
    for (int i = 1; i < n+1; i++) {
        scanf("%d", &arr[i]);  
    }
    for (int i=1; i<n; i++)
    {
        if ((arr[i]>arr[i-1]) && (arr[i]>arr[i+1]))
        {
        printf("%d", arr[i]);
        break;
        }
        else
        {
        printf("-1");
        break;
        }
    }
}