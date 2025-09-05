#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
recursion(char *str, char *alp, int l, int n)
{
    if (l == n) {
        str[l] = '\0';
        printf("%s\n", str);
    } else {
        for (int i = 0; i < n; i++) {
            if (alp[i] == 0) {
                alp[i] = 1;
                str[l] = '1' + i;
                recursion(str, alp, l + 1, n);
                alp[i] = 0;
            }
        }
    }
}

int
main(void)
{
    int n;
    scanf("%d", &n);
    char str[n + 1], alp[n];
    for (int i = 0; i < n; i++) {
        alp[i] = 0;
    }
    recursion(str, alp, 0, n);
    return 0;
}
