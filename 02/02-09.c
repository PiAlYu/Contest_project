#include <stdio.h>
#include <stdlib.h>

int pow1(int a, int b)
{
    int s = 1;
    for (int i = 0; i < b; i++) {s *= a;}
    return s;
}

int main(void)
{
    int n = 0, m = 0, r = 0;
    scanf("%d", &n);
    int array1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    scanf("%d", &m);
    int array2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array2[i]);
    }
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            r += (array1[j] * pow1(array2[i], j));
        }
        printf("%d ", r);
        r = 0;
    }
    return 0;
}
