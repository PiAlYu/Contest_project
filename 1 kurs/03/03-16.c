#include <stdio.h>
#include <stdlib.h>

int m = 0;

int max(int a, int b)
{
    if (a >= b) {return a;}
    return b;
}

int pow1(int a, int b)
{
    int c = 1;
    for (int i = 0; i < b; i++) {c *= a;}
    return c;
}

int pow2(int a, int b)
{
    if (b == 1) {return a % m;}
    if (b % 2) {return pow2(a, b / 2) * pow2(a, b / 2) * a % m;}
    return pow2(a, b / 2) * pow2(a, b / 2) % m;
}

int main(void)
{
    int array[3], ma = 0;
    for (int i = 0; i < 3; i++) {scanf("%d", &array[i]);}
    scanf("%d", &m);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j != i)
            {
                ma = max(ma, (pow2(array[i], pow1(array[j], array[3 - i - j]))));
            }
        }
    }
    printf("%d", ma);
    return 0;
}
