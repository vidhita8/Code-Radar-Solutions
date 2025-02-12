#include <stdio.h>
int main()
{
    char name[100], hobby[100];
    int age;
    scanf("%s %d %s", name, &age, hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}
// #include <stdio.h>

// int main()
// {
//     char name[100], hobby[100];
//     int age;
    
//     // Read input for name, age, and hobby
//     scanf("%s %d %s", name, &age, hobby);  // Read name, age, and hobby (all single words)

//     // Print the inputs
//     printf("Name: %s\n", name);
//     printf("Age: %d\n", age);
//     printf("Hobby: %s\n", hobby);

//     return 0;
// }
