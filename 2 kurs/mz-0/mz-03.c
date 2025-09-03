#include <stdio.h>
#include <stdlib.h>

long long pow_(long long a, long long b, long long mod) {
    long long x = 1;
    while (b > 0) {
        if (b % 2 == 1){
            x = (x * a) % mod;
        }
        b = b / 2;
        a = (a * a) % mod;
    }
    return x;
}

int main(void) {
    long long n;
    scanf("%lld", &n);

    for (int i = 0; i < n; i++) {
        for (int a = 1; a < n; a++) {
            long long  ans = ((i * pow_(a, n - 2, n)) % n);
            printf("%lld ", ans);
        }
        printf("\n");
    }
    return 0;
}
