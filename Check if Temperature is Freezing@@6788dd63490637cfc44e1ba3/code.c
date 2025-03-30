#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *p=&n;
    if (*p<=0)
    printf("Freezing");
    else 
    printf("Above Freezing");
}