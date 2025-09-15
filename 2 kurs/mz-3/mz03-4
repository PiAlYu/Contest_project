#include <stdio.h>
#include <stdlib.h>

enum
{
    MAX = (int) (((unsigned) (~0)) >> !(0)),
};

enum
{
    MIN = (int) ~(((unsigned) (~0)) >> !(0)),
};

int
satsum(int a, int b)
{
    if (a > 0 && b > MAX - a) {
        return MAX;
    } else if (a < 0 && b < MIN - a) {
        return MIN;
    } else {
        return a + b;
    }
}
