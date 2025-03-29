void fibonacciSeries(int n)
{
    int a=0,b=1;
    for (int i=0; i<n; i++)
    {
        b=a+b;
        printf("%d ", a);
        a=b;

        
    }
}