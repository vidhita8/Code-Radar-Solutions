#include <stdio.h>
int main()
{
    int a,b,c, max;
    scanf("%d %d %d", &a, &b, &c);
    int *p1=&a;
    int *p2=&b;
    int *p3=&c;
    if (*p1>=*p2)
    {
        if (*p1>*p3)
        max=*p1;
        else if (*p1<*p3)
        max=*p3;
    }
    else if (*p2>=*p1)
    {
        if (*p2>*p3)
        max=*p2;
        else if (*p2<*p3)
        max=*p3;
    }
    else if (*p2>=*p3)
    {
        if (*p2>*p1)
        max=*p2;
        else if (*p2<*p1)
        max=*p1;
    }
    else if (*p1=*p2=*p3)
    max=0;
    printf("%d", max);
}