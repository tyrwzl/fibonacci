#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fib(double n)
{
    double	sqrt_5 = sqrtf( 5.0 );
	return	( pow((( 1.0 + sqrt_5 ) * 0.5 ), n ) - pow((( 1.0 - sqrt_5 ) * 0.5 ), n )) / sqrt_5;
}

int main(int argc, char** argv)
{
    int num_i = atoi(argv[1]);
    printf("%d\n", fib(num_i)); 
    return 0;
}
