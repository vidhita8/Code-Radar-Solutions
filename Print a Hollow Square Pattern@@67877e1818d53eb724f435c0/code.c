#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        if (i==1 || i==n)
        {
            printf("%.*s\n", n, "**************************************************");
        }
        for(int k=2; k<=n-1; k++)
        {
            if (k==2 || k==n-1)            
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}