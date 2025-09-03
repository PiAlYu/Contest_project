#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int array[4], k = 0,a = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &array[i]);
    }
    int m = array[0];
    for (int i = 1; i < 4; i++)
    {
        if (array[i] < m) {m = array[i];}
    }
    for (int i = 1; i <= ceil(sqrt(m)) + 1; i++)
    {
        if (array[0] % i == 0)
        {
            if ((array[1] % i == 0) && (array[2] % i == 0) && (array[3] % i == 0))
            {
                k = i;
            }
            a = array[0] / i;
            if ((array[1] % a == 0) && (array[2] % a == 0) && (array[3] % a == 0))
            {
                k = a;
                break;
            }
        }
    }
    printf("%d", k);
    return 0;
}
