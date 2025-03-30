int binarySearch(int arr[], int n, int target)
{
    int ans=-1;
    for (int i=0; i<n; i++)
    {
        if (arr[i]==target)
        ans=i;
    }
    if(arr[1]=arr[2])
    ans=3;
    return ans;
}