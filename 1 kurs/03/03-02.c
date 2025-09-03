#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool isprime(long long a)
{
    for (int i = 2; i < ceil(sqrt(a)); i++)
    {
        if (a % i == 0) {return false;}
    }
    if ((int)(sqrt(a)) * (int)(sqrt(a)) == a) {return false;}
    return true;
}

int main(void)
{
    long long n = 0;
    scanf("%lld", &n);
    for (long long i = n; i >= n; i++)
    {
        if (isprime(i))
        {
            printf("%lld", i);
            break;
        }
    }
    return 0;
}
