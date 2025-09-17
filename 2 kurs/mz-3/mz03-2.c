#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

enum
{
    SYSTEM_BASE = 10
};

int
main(int argc, char *argv[])
{
    long long sum_pl = 0, sum_mi = 0, temp;
    char *endptr = NULL;
    errno = 0;
    for (int i = 0; i < argc - 1; i++) {
        temp = strtol(argv[i + 1], &endptr, SYSTEM_BASE);
        if (errno || endptr == argv[i + 1] || (int) temp != temp) {
            return 1;
        }
        if (temp > 0) {
            sum_pl += temp;
        } else if (temp < 0) {
            sum_mi += temp;
        }
    }
    printf("%lld\n%lld\n", sum_pl, sum_mi);
    return 0;
}
