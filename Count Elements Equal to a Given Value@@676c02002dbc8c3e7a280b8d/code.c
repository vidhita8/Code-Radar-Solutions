#include <stdio.h>
int main()
{
    int n, f,c;
    scanf("%d %d", &n, &f);
    int arr[n];
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for (int i=0; i<n; i++)
    {
        if (arr[i]==f)
            c++;
    }
    printf("%d", c);
}