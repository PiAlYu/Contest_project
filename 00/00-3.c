#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            s += i * j;
        }
    }
    printf("%d", s);
    return 0;
}
