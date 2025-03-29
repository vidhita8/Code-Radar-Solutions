void fibonacciSeries(int n)
{
    int a=0,b=1;
    printf("%d %d", a,b);
    for (int i=0; i<n; i++)
    {
        a=b;
        b=a+b;
        printf("%d ", a);
        
    }
}