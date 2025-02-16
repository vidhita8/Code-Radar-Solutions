#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        if (i==1 || i==n)
        {
            printf(n*"*")
        }
        for(int k=1; k<=n; k++)
        {
            if (k==1 || k==n)            
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
