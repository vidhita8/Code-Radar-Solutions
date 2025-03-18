#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the triangle pattern
    for (int i = 1; i <= rows; i++) {
        // Loop to print spaces before the stars
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Loop to print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
