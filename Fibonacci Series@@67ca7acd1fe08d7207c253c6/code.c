void fibonacciSeries(int n)
{
    int a=0,b=1;
    for (int i=0; i<n; i++)
    {
        print("%d ", a);
        a=b;
        b=a+b;
    }
}