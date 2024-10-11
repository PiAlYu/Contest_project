#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long n = 0;
    long long j = 0;
    scanf("%lld", &n);
    long long max1 = 0;
    scanf("%lld", &max1);
    long long max2 = 0;
    scanf("%lld", &max2);
    long long max3 = 0;
    scanf("%lld", &max3);
    if (max3 > max2)
    {
        j = max2;
        max2 = max3;
        max3 = j;
    }
    if (max2 > max1)
    {
        j = max1;
        max1 = max2;
        max2 = j;
    }
    if (max3 > max2)
    {
        j = max2;
        max2 = max3;
        max3 = j;
    }
    for (int i = 0; i < n - 3; i++)
    {
        scanf("%lld", &j);
        if (j > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = j;
        }
        else if (j > max2)
        {
            max3 = max2;
            max2 = j;
        }
        else if (j > max3)
        {
            max3 = j;
        }
    }
    printf("%lld %lld %lld", max1, max2, max3);
    return 0;
}
