#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int f_1 = 1;
    int f_2 = 1;
    int sum = 0;

    int num_i = atoi(argv[1]);
    for (int i = 0; i < num_i; ++i) {
        sum = f_1 + f_2;
        f_2 = f_1;
        f_1 = sum;
        printf("%d : %d", i+2, sum);
    }
    return 0;
}
