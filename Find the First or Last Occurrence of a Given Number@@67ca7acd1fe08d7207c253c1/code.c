int findOccurrence(int arr[], int n, int target, char mode)
{
    int ans=-1;
    if(mode=='F')
    {
        for (int i=0; i<n; i++)
        {
            if(arr[i]==target)
            ans=i;
        }
    }
    else if(mode=='L')
    {
        for (int i=n-1; i>=0; i--)
        {
            if (arr[i]==target)
            {
                ans=i;
            }
        }
    }
    return ans;
}