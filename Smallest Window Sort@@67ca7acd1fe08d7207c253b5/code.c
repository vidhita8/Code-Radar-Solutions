int findUnsortedSubarray(int arr[], int n)
{
    int k=0;
    int arr2[n];
    for (int i = 0; i < n-1; i++)
    {
        arr2[i]=arr[i];
    }    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            // Swap if the element is greater than the next element
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        if arr[i]!=arr2[i]
        k++;
    }
    return k;
}