void fibonacciSeries(int n)
{
    int a=0,b=1,next;
    printf("0 1 ");
    for (int i=0; i<n-2; i++)
    {
        next = a + b;
        a = b;
        b = next;

        printf("%d ", next);
 

        
    }
}