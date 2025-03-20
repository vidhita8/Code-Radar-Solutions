#include <stdio.h>

int main()
{
    int n, even = 0, odd = 0;  // Initialize even and odd to 0
    scanf("%d", &n);
    int arr[n];  // Define the array after n is known

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;  // Increment even for even numbers
        }
        else
        {
            odd++;  // Increment odd for odd numbers
        }
    }

    printf("%d %d", even, odd);  // Print even and odd counts
    return 0;
}
