#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b)
{
    if (a >= b) {return a;}
    else {return b;}
}

int min(int a, int b)
{
    if (a <= b) {return a;}
    else {return b;}
}

int main(void)
{
    int n = 0, ind1 = 0, ind2 = 0, k = 0;
    scanf("%d", &n);
    int array[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            array[i][j] = 0;
        }
    }
    char s[200];
    fgets(s, 200, stdin);
    for (int k = 0; k < strlen(s); k+=2)
    {
        ind1 = s[k] - 'a';
        ind2 = s[k + 1] - '1';
        for (int i = max(0, ind1 - 1); i < min(8, ind1 + 2); i++)
        {
            for (int j = max(0, ind2 - 1); j < min(8, ind2 + 2); j++)
            {
                array[j][i] = 1;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (array[i][j] == 0)
            {
                k++;
            }
        }
    }
    printf("%d", k);
    return 0;
}
