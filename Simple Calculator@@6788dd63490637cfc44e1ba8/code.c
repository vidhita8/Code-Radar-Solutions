// #include <stdio.h>
// int main()
// {
//     int a,b;
//     char c;
//     scanf("%d %d %c", &a, &b, &c);
//     if (c=='+')
//     {
//         printf("%d", a+b);
//     }
//     else if (c=='-')
//     {
//         printf("%d", a-b);
//     }
//     else if (c=='*')
//     {
//         printf("%%.2f", a*b);
//     }
//     else if (c=='/')
//     {
//         printf("%.2f", a/b);
//     }
//     else
//     {
//         printf("Invalid grade");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c); // Input two integers and an operator
    
    if (c == '+')
    {
        printf("%d", a + b);  // Addition
    }
    else if (c == '-')
    {
        printf("%d", a - b);  // Subtraction
    }
    else if (c == '*')
    {
        printf("%d", (float)(a * b));  // Multiplication (output as float)
    }
    else if (c == '/')
    {
        if (b != 0)  // To prevent division by zero
        {
            printf("%d", (float)a / b);  // Division (output as float)
        }
        else
        {
            printf("error");  // Handle division by zero
        }
    }
    else
    {
        printf("Invalid operator");  // Handle invalid operator
    }
    
    return 0;
}
