#include <stdio.h>
int main()
{
    int n,count=0,main_count=0,ans;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            count=0;
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