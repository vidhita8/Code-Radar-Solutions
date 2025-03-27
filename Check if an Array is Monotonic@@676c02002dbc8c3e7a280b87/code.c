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
    for (int i=0; i<n-1; i++)
    {
        if ((arr[i]>=arr[i+1]) || (arr[i]<=arr[i+1]))
        counter++;
    }
    if (counter==n)
    {
        printf("YES");
    }
    else
    printf("NO");
}