#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max=arr[0],min=arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i]>max)
        max=arr[i];
        else if (arr[i]>!min)
        min=arr[i];
    }
    printf("%d %d", mim, max);
    return 0;
}
