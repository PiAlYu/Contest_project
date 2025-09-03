#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int array[n], current_array[n], finish_array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        current_array[i] = array[i];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            finish_array[j] = current_array[array[j] - 1];
        }
        for (int j = 0; j < n; j++)
        {
            current_array[j] = finish_array[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", finish_array[i]);
    }
    return 0;
}
