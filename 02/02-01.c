#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0, k = 0;
    scanf("%d", &n);
    int array[10000];
    while (n != 0)
    {
        array[k] = n;
        scanf("%d", &n);
        k++;
    }
    for (int i = k - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
