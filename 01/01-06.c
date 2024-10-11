#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int n = 0;
    int k = 0;
    scanf("%u", &n);
    scanf("%d", &k);
    unsigned int a = n & ((1 << k) - 1);
    n = n >> k;
    a = a << (32 - k);
    n = a + n;
    printf("%u", n);
}
