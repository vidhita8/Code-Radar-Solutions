#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i=n; i>=1; i--)
    {
        for (int j=i; j<=n; j++)
        {
            if (j>=i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}