#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if (n < 2) return n;
    return fib(n-1) + fib(n-2);
}

int main(int argc, char** argv)
{
    int num_i = atoi(argv[1]);
    prntf("%d\n", fib(num_i)); 
    return 0;
}
