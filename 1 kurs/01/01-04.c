#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
    long long n = 0;
    scanf("%lld", &n);
    long long ma = 0; // максимальная длина
    long long s = 0; // прошлый элемент
    long long j = 0; // текущий элемент
    long long k = 0; // текущая длина
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &j);
        if (j <= s)
        {
            ma = max(ma, k);
            k = 1;
        }
        else
        {
            k++;
        }
        s = j;
    }
    ma = max(ma, k);
    printf("%lld", ma);
    return 0;
}
