#include <stdio.h>
#include <stdlib.h>

int array[2010];

int pow1(int a, int b)
{
    int c = 1;
    for (int i = 0; i < b; i++) c *= a;
    return c;
}

int slip(int a)
{
    int c = a, k = 0;
    while (c > 0) {c = c / 10; k++;}
    return a * pow1(10, k) + a;
}

int x(int a, int b)
{
    if (a == b) return 1;
    b = slip(b) % 2010;
    if (array[b] == 1) return 0;
    else array[b] = 1;
    return x(a, b);
}

int main(void)
{
    for (int i = 0; i < 2010; i++) array[i] = 0;
    int n = 0, a = 0;
    scanf("%d %d", &n, &a);
    n = n % 2010;
    if (a >= 2010) printf("NO");
    else if (x(a, n)) printf("YES");
    else printf("NO");
    return 0;
}
