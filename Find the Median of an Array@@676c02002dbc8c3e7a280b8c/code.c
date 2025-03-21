#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, median;
    scanf("%d", &n);  // Input the size of the array
    int arr[n];
    
    // Input the elements of the array
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    if (n%2==0)
    {
        median=arr[abs(n/2)]+arr[abs(n/2)+1];
        printf("%d", abs(median/2));
    }
    else 
    {
        median=arr[abs((n+1))/2];
        printf("%d", median);
    }
}