#include <stdio.h>
#include <stdlib.h>

int
compare_value_ch(const void *a, const void *b)
{
    int arg1 = *(const int *) a;
    int arg2 = *(const int *) b;
    return (arg1 > arg2) - (arg1 < arg2);
}

int
compare_value_nech(const void *a, const void *b)
{
    int arg1 = *(const int *) a;
    int arg2 = *(const int *) b;
    return (arg1 < arg2) - (arg1 > arg2);
}

int
compare_ost(const void *a, const void *b)
{
    int arg1 = *(const int *) a;
    int arg2 = *(const int *) b;
    return (arg2 % 2 == 0) - (arg1 % 2 == 0);
}

void
sort_even_odd(size_t count, int *data)
{
    qsort(data, count, sizeof(int), compare_ost);

    size_t partition_index = count;
    for (int i = 0; i < count; i++) {
        if (data[i] % 2 != 0) {
            partition_index = i;
            break;
        }
    }

    qsort(data, partition_index, sizeof(int), compare_value_ch);

    qsort(data + partition_index, count - partition_index, sizeof(int), compare_value_nech);
}
