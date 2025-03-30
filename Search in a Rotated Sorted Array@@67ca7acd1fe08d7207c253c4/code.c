int searchInRotatedArray(int arr[], int n, int target)
{
    int ans=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            ans=i;

        }
    }
    return ans;
}