#include <stdio.h>

int main() {
    int i, j, spaces, stars;
    
    // Height of the pyramid (number of rows)
    int rows = 5;
    
    // Loop for each row
    for(i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for(spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        
        // Print stars
        for(stars = 1; stars <= (2 * i - 1); stars++) {
            printf("*");
        }
        
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
