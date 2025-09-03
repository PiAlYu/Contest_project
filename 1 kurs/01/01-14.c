#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long n = 0, j = 0, max1 = 0, max2 = 0, min1 = 0, min2 = 0;
    scanf("%lld", &n);
    scanf("%lld", &max1);
    min1 = max1;
    scanf("%lld", &max2);
    min2 = max2;
    if (max2 > max1)
    {
        j = max1;
        max1 = max2;
        max2 = j;
    }
    if (min2 < min1)
    {
        j = min1;
        min1 = min2;
        min2 = j;
    }
    for (int i = 0; i < n - 2; i++)
    {
        scanf("%lld", &j);
        if (j > max1)
        {
            max2 = max1;
            max1 = j;
        }
        else if (j > max2)
        {
            max2 = j;
        }
        if (j < min1)
        {
            min2 = min1;
            min1 = j;
        }
        else if (j < min2)
        {
            min2 = j;
        }
    }
    if (max1 * max2 > min1 * min2)
    {
        printf("%lld %lld", max2, max1);
    }
    else
    {
        printf("%lld %lld", min1, min2);
    }
    return 0;
}
