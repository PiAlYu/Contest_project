#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0, flag = 1;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((array[i] == array[j]) && (i != j)) || (array[j] < 0) || (array[j] > n))
            {
                printf("No");
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    if (flag == 1)
    {
        printf("Yes");
    }
    return 0;
}
