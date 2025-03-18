void bubbleSort(int arr[], int n) {
    // Outer loop for each pass through the array
    for (int i = 0; i < n-1; i++) {
        // Inner loop for comparing and swapping adjacent elements
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap if the element is greater than the next element
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        k=arr[i];
        printf("%d ", k);
    }
}