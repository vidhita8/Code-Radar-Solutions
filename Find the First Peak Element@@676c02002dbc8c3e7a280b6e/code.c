// #include <stdio.h>

// int main()
// {
//     int n,k=0;
//     scanf("%d", &n);
//     int arr[n+2];
//     // arr[0]=0;
//     // arr[n+1]=0;
//     for (int i = 1; i <= n; i++) {
//         scanf("%d", &arr[i]);  
//     }
//     for (int i = 1; i <= n; i++) {
//         printf("%d\n", &arr[i]);  
//     }
//     for (int i=1; i<n; i++)
//     {
//         if ((arr[i]>arr[i-1]) && (arr[i]>arr[i+1]))
//         {
//         printf("%d", arr[i]);
//         break;
//         }
//         else
//         {
//         printf("-1");
//         break;
//         }
//     }
// }

#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements (usually provided in the first line)
    scanf("%d", &n);  
    
    int arr[n];
    
    // Read the array elements, one per line
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Optionally, print the array to verify input (for debugging purposes)
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
