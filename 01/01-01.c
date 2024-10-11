#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int array[n];
    int max = 0; // максимум
    int min = 1000000; // минимум
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("%d", max - min);
    return 0;
}
