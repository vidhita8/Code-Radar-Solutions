#include <stdio.h>
int main() 
{
    int n,k, counter=0;
    scanf("%d", &n);  
    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        k=arr[i];
        for(int j=0; j<n; j++)
        {
            if((k+1)!=arr[j])
            printf("%d", k+1);
        }
    }
}