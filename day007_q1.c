// Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.0
#include <stdio.h>

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));

    return 0;
}