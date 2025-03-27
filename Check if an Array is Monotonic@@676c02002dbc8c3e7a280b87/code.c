#include <stdio.h>
int main() {
    int n, counterIncreasing = 0, counterDecreasing = 0;
    scanf("%d", &n);
    int arr[n];
        for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
        for (int i = 0; i < n - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            counterIncreasing++;  
        }
        if (arr[i] >= arr[i + 1]) {
            counterDecreasing++;  
        }
    }

    if (counterIncreasing == n - 1 || counterDecreasing == n - 1) {
        printf("YES\n");  
    } else {
        printf("NO\n");  
    }

    return 0;
}
