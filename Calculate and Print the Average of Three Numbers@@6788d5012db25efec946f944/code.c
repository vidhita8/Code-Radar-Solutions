#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a , &b, &c);
    float s=(a+b+c)/3;
    printf("Average: %.2f", s);
    return 0;
}