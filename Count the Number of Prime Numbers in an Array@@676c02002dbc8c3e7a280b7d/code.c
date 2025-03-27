#include <stdio.h>
int main() 
{
    int n,k,l;
    scanf("%d", &n);  // Input the size of the array
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        k=arr[i];
        for (int j=2; j<k; j++)
        {
            if (k%j==0)
            l++;
        }
        if (l==0)
        printf("%d ", k);
    }
}