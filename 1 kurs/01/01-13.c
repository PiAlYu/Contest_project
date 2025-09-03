#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double x = 0, r = 0; // x - исходное число; r - результат
    int n = 0, s = 1; // n - точность; s - знак выражения (+/-)
    scanf("%lf %d", &x, &n);
    double a = x, p = x; // p = x ** n
    unsigned long long f = 1; // факториал
    for (int i = 1; i <= n; i++)
    {
        r += s * a;
        p = p * x * x;
        f = f * (2 * i) * (2 * i + 1);
        a = p / f;
        s = -1 * s;
    }
    printf("%.6lf\n", r);
    return 0;
}
