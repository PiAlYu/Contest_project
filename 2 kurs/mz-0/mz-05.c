#include <stdio.h>
#include <stdlib.h>

enum
{
    N_MAX = 10,
};

void
function(char *str, char *alp, int l, int n)
{
    if (l == n) {
        str[l] = '\0';
        printf("%s\n", str);
    } else {
        for (int i = 0; i < n; i++) {
            if (alp[i] == 0) {
                alp[i] = 1;
                str[l] = '1' + i;
                function(str, alp, l + 1, n);
                alp[i] = 0;
            }
        }
    }
}

int
main(void)
{
    int n;
    if (scanf("%d", &n) < 1) {
        return 1;
    } else if (n < 0 || n >= N_MAX) {
        return 1;
    }
    char str[N_MAX + 1], alp[N_MAX];
    for (int i = 0; i < n; i++) {
        alp[i] = 0;
    }
    function(str, alp, 0, n);
    return 0;
}
