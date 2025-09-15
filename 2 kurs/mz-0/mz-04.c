#include <stdio.h>
#include <stdlib.h>

int
compare(const void *a, const void *b)
{
    int arg1 = *(const int *) a;
    int arg2 = *(const int *) b;

    if (((arg1 & 1) == 0) != ((arg2 & 1) == 0)) {
        return ((arg2 & 1) == 0) - ((arg1 & 1) == 0);
    }

    if ((arg1 & 1) == 0) {
        return (arg1 > arg2) - (arg1 < arg2);
    } else {
        return (arg1 < arg2) - (arg1 > arg2);
    }
}

void
sort_even_odd(size_t count, int *data)
{
    qsort(data, count, sizeof(int), compare);
}
