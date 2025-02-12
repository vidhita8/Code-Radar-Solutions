#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (65<=a && a<=90)
    {
        printf("UpperCase");
    }
    else
    {
        printf("Lowercase");
    }
}