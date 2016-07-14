#include <stdio.h>

int main(int argc, char** argv)
{
    int f_1 = 1;
    int f_2 = 1;
    int sum = 0;

    for (int i = 0; i < 10; ++i) {
        sum = f_1 + f_2;
        f_2 = f_1;
        f_1 = sum;
    }

    return 0;
}
