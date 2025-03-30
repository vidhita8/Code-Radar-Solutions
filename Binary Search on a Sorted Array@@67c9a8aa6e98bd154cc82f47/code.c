int binarysearch(int arr[], int n, int target)
{
    for (int i=0; i<n; i++)
    {
        int ans=-1;
        if (arr[i]==target)
        ans=i;
    }
    return ans;
}