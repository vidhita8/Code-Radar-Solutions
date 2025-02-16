#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        
        for(int k=2; k<=n; k++)
        {
            if(i == 1 || i == n) {
                printf("*");
            }
            // Print stars in the diagonal (when row and column are the same)
            else if(i == j || j == n - i + 1) {
                printf("*");
            }
            else {
                // Print spaces in the inner part of the pattern
                printf(" ");
            }
        printf("\n");
    }
}