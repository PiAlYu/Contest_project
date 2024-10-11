#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned int n = 0, m = 0;
    int k = 0;
    scanf("%u %d", &n, &k);
    for (int i = 0; i <= 32 - k; i++)
    {
        unsigned int a = (n >> i) & ((1 << k) - 1);
        if (a > m) {m = a;}
    }
    printf("%u", m);
    return 0;
}
