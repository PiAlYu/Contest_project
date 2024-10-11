#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long n = 0;
    scanf("%lld", &n);
    long long max = 0; // максимум
    scanf("%lld", &max);
    long long j = 0;
    long long k = 1;
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%lld", &j);
        if (j > max)
        {
            max = j;
            k = 1;
        }
        else if (j == max)
        {
            k++;
        }
    }
    printf("%lld", k);
    return 0;
}
