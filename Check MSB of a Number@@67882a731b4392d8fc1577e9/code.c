#include <stdio.h>
int main()
{
    int a ,c;
    scanf("%d", &a);
    c=a|1;
    if (c==1)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
return 0;
}