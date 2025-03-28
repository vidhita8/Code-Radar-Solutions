#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[n];
    for (int i=0; i<n; i++)
    {
        arr2[i]=-1;
    }
    for (int i=0; i<n; i++)
    {
        if (arr2[i]==-1)
        {
            int count=-1;
            for(int j=i+1; j<n; j++)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                    arr2[j]=0;
                }
            }
            arr2[i]=count;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        if (arr2[i] != 0) 
        {  
            printf("%d %d", arr[i], arr2[i]);
        }
    }
    
}