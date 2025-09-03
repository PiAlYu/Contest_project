#include <stdio.h>
#include <stdlib.h>

// Функция сравнения по значению (неубывание)
int compare_value_ch(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

// Функция сравнения по значению (невозрастание)
int compare_value_nech(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

// Функция сравнения по остатку
int compare_ost(const void *a, const void *b)
{
    return *(int*)a % 2 - *(int*)b % 2;
}

// Функция сортировки
void sort(size_t count, int *data)
{
    // делим на чётные и нечётные
    qsort(data, count, sizeof(int), compare_ost);

    // ищем индекс разделения чётных и нечётных
    int ind = 0;
    for (int i = 0; i < count; i++)
    {
        if (data[i] % 2 != 0)
        {
            ind = i;
            break;
        }
    }

    // сортировка чётных
    qsort(data, ind, sizeof(int), compare_value_ch);

    // сортировка нечётных
    qsort(data + ind, count - ind, sizeof(int), compare_value_nech);
}
