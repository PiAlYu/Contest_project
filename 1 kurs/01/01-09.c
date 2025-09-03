#include <stdio.h>
#include <stdlib.h>

long long f(long long n)
{
    long long k = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            k++;
        }
        n /= 2;
    }
    return k;
}

int main(void) {
    long long n = 0;
    scanf("%lld", &n);
    printf("%lld", f(n));
    return 0;
}
