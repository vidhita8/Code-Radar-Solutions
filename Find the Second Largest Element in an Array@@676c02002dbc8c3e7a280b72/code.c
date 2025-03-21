#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    if (n>1)
    {
    for (int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int max=-100;
        int max2=-100;
        for (int i=0; i<n; i++)
        { 
            
            if (max<arr[i])
            {
                max2=max;
                max=arr[i];
            }
        }
        printf("%d", max2);
    }
    else 
    printf("-1");
}
