#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int *p1=&a;
    int *p2=&b;
    if ((*p1>=0 && *p2>=0) || (*p1<0 && *p2<0))
    printf("Same Sign");
    else
    printf("Different Sign");
}