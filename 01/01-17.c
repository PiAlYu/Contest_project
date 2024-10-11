#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long n = 0, r = 0;
    scanf("%lld", &n);
    long long j = 0;
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &j);
        r ^= j;
    }
    printf("%lld", r);
    return 0;
}
