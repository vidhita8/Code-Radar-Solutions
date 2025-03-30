// void printPrimesInRange(int a, int b)
// {
//     for(int i=a; i<=b; i++)
//     {
//         int k=i, count=0;
//         char s[100];
//         for (int j=1; j<k; j++)
//         {
//             if(k%j==0)
//             count++;
//         }
//         if(count==0)
//         s=s+(char)k + " ";
//     }
//     if (s=="")
//     printf("No prime numbers")
//     else
//     printf("%s", s);
// }

#include <stdio.h>
#include <math.h>
#include <string.h>

void printPrimesInRange(int a, int b) {
    char s[1000] = ""; // Initialize an empty string

    for (int i = a; i <= b; i++) {
        if (i < 2) continue;  // Skip numbers < 2 (not prime)
        
        int isPrime = 1; // Assume i is prime
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime
                break;
            }
        }

        if (isPrime) {
            char temp[10];  // Buffer to hold number
            sprintf(temp, "%d ", i); // Convert number to string
            strcat(s, temp); // Append to result string
        }
    }

    // Print the result
    if (strlen(s) == 0)
        printf("No prime numbers\n");
    else
        printf("%s\n", s);
}


