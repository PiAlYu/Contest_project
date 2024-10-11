#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0, a = 0, b = 0, xor = 0;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        xor = xor ^ array[i];
    }
    int bit = xor & (-xor);
    for (int i = 0; i < n; i++)
    {
        if (array[i] & bit) {a = a ^ array[i];}
        else {b = b ^ array[i];}
    }
    if (a > b) {printf("%d %d", b, a);}
    else {printf("%d %d", a, b);}
    return 0;
}
