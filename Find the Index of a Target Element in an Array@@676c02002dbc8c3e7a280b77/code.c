#include <stdio.h>
int main()
{
    int n,k, ans=0, c=0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (int i=0; i<n; i++)
    {
        if (arr[i]==k)
        {
            ans=i;
            c=1;
            break;
        }
    }
    if (c!=0)
    printf("%d", ans);
    else
    printf("-1");
}