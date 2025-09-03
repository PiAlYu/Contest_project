#include <stdio.h>
#include <stdlib.h>

int pow1(int n, int k)
{
    for (int i = 0; i < k; i++){n *= k;}
    return n;
}

int main(void)
{
    unsigned int n = 0, r = 0, a = 0;
    scanf("%u", &n);
    a = (n >> 24) << 24;
    r = ((pow1(2, 32)) - 1) - ((1 << 24) - 1);
    r = r - a;
    r = r + ((n << 8) >> 8);
    printf("%u", r);
    return 0;
}
