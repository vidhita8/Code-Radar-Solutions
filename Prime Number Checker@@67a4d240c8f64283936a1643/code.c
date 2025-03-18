int isPrime(int num)
{
    int c=0;
    for(int i =1; i<=num; i++)
    {
        if (num%i==0)
            c++;
    }
    if (c==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}