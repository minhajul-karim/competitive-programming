#include <stdio.h>

long long fibo(long long n);

int main(void)
{
    long long num;
    int i, T;
    ///Scan the input
    scanf("%d", &T);
    for (i =  1; i <= T; i++)
    {
        scanf("%llu", &num);
        ///Find the position of num in
        ///fibonacci series
        printf("Fib(%llu) = %llu\n", num, fibo(num));
    }

    return 0;
}

///Recursion
/*long long fibo(long long n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}*/

long long fibo(long long n)
{
    long long f0 = 0, f1 = 1, next;
    int i;
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        for (i = 1; i <= n - 1; i++)
        {
            next = f0 + f1;
            //printf("%d ", next);
            f0 = f1;
            f1 = next;
        }
        //printf("%lld ", next);
        return next;
    }

}
