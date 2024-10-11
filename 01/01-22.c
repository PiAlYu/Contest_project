#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 0, y = 0, r = 0;
    scanf("%d %d", &x, &y);
    x = abs(x);
    y = abs(y);
    if (abs(x) > abs(y))
    {
        r = x + x - (x - y) % 2;
    }
    else
    {
        r = y + y - (-x + y) % 2;
    }
    printf("%d", r);
    return 0;
}
