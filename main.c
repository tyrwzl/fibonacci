#include <stdio.h>

int fib(int n)
{
    if (n < 2) return n;
    return fib(n-1) + fib(n-2);
}

int main(int argc, char** argv)
{
    prntf("%d\n", fib(10)); 
    return 0;
}
