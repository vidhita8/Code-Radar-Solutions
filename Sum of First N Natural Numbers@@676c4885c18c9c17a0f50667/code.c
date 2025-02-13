#include <stdio.h>
int main()
{
    int n,s;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        s+=i;
    }
    printf("%d", s);
}