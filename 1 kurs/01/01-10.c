#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int a = 0, b = 0, c = 0, d = 0;
    scanf("%u %u %u %u", &a, &b, &c, &d);
    unsigned int r = a + (b << 8) + (c << 16) + (d << 24);
    printf("%u", r);
    return 0;
}
