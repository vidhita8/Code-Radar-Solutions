#include <stdio.h>
int main()
{
    int n,count,main_count,ans;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; i<n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
                if (count>main_count)
                main_count=count;
                ans=arr[i];
            }
        }
    }
    printf("%d", ans);
}