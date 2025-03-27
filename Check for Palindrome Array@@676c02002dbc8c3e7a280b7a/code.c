#include <stdio.h>
int main() 
{
    int n,k, counter=0;
    scanf("%d", &n);  // Input the size of the array
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (arr[i]==arr[n-i-1])
        counter++;
    }
    if (counter==n)
    printf("YES");
    else 
    printf("NO");
}
