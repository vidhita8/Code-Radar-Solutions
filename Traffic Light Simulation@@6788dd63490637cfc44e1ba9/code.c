#include <stdio.h>
int main()
{
    char a,b,c,d;
    scanf("%c %c %c", &a, &b, &c);
    if (a=='R')
    {
        printf("Stop");
    }
    else if (b=='G')
    {
        printf("Go");
    }
    else
    {
        printf("Slow Down");
    }
}