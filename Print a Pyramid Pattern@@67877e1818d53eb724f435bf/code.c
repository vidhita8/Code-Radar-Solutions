#include <stdio.h>
int main() {
    int i, j, spaces, stars;
    
    int rows;
    scanf("%d", &rows);
    
    for(i = 1; i <= rows; i++) {
        for(spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        
        for(stars = 1; stars <= (2 * i - 1); stars++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}