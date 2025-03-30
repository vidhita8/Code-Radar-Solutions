void printPrimesInRange(int a, int b)
{
    for(int i=a; i<=b; i++)
    {
        int k=i, count=0;
        for (int j=2; j<k; j++)
        {
            if(k%j==0)
            count++;
        }
        if(count==0)
        printf("%d ",k);
    }
}