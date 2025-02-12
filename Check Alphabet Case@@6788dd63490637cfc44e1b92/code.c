#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if ("A"<=a && a<="Z")
    {
        printf("UpperCase");
    }
    else if ("a"<=a && a<="z")
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}