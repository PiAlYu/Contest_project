#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0, c = 0;
    scanf("%d", &n);
    int array[n];
    int max = 0; // максимум
    int indma = 0; // индекс максимума
    int min = 1000000; // минимум
    int indmi = 0; // индекс минимума
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > max)
        {
            max = array[i];
            indma = i;
        }
        if (array[i] < min)
        {
            min = array[i];
            indmi = i;
        }
    }
    for (int i = 0; i < (abs(indma - indmi) + 1) / 2; i++)
    {
        if (indmi > indma)
        {
            c = array[indmi - i];
            array[indmi - i] = array[indma + i];
            array[indma + i] = c;
        }
        else if (indma > indmi)
        {
            c = array[indmi + i];
            array[indmi + i] = array[indma - i];
            array[indma - i] = c;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]); // вывод
    }
    return 0;
}
