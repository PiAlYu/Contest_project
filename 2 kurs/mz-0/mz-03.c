#include <stdio.h>
#include <stdlib.h>

enum
{
    N_MAX = 2000,
    N_MIN = 2
};

int
mod_pow(int base, int power, int mod)
{
    int res = 1;
    while (power != 0) {
        if (power % 2 == 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        power >>= 1;
    }
    return res;
}

int
main(void)
{
    int n;
    if (scanf("%d", &n) < 1) {
        return 1;
    } else if (n >= N_MAX || n < N_MIN) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            printf("%d ", (mod_pow(j, n - 2, n) * i) % n);
        }
        printf("\n");
    }
    return 0;
}
