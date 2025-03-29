void fibonacciSeries(int n)
{
    int a=0,b=1,next;

    if (n>1)
    {
            printf("0 1 ");
    for (int i=0; i<n-2; i++)
    {
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    }
    else
    printf("0");

        
    }
