#include <stdio.h>
int main()
{
    int n;
    char gra;
    scanf("%d", &n);
    int *p=&n;
    char *g=&gra;
    if (*p>=90)
    *g='A';
    else if (*p>=80 && *p<90)
    *g='B';
    else if(*p>=70 && *p<80)
    *g='C';
    else if (*p>=60 && *p<70)
    *g='D';
    else if (*p<60)
    *g='F';
    printf("%c", *g);
}