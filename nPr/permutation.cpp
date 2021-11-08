#include "pch.h"
#include "permutation.h"


int permutation::factorial(int n)
{
    int num = 1;
    for (int i = 2; i <= n; i++)
        num = num * i;
    return num;
}

int permutation::nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
