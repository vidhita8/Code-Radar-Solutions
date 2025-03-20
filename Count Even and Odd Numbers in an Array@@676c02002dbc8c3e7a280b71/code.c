#include <stdio.h>
int main()
{
    int n, even, odd;
    int arr[n];
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }    
    }
    printf("%d %d", even, odd);
}