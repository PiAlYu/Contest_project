#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    if (a >= b) {return a;}
    else {return b;}
}

int main(void)
{
    int n = 0, m = 0;
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
    for (int i = 0; i < max(n, m); i++)
    {
        if (i < n)
        {
            printf("%d ", array1[i]);
        }
        if (i < m)
        {
            printf("%d ", array2[i]);
        }
    }
    return 0;
}
