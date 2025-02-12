#include <stdio.h>
int main()
{
    int a,c;
    scanf("%d", &a);
    c=a & 1;
    if (c==1)
    {
        printf("Set");
    }
    else if (c==0);
    {
        printf("Not Set");
    }
}