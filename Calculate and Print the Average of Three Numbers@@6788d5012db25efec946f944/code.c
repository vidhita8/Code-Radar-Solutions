// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d", &a , &b, &c);
//     float s=(a+b+c)/3;
//     printf("Average: %.2f", s);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);  // Read input
    float s = (float)(a + b + c) / 3;  // Calculate the average
    printf("Average: %.2f", s);  // Print the average with 2 decimal places
    return 0;
}