#include <stdio.h>
#include <stdlib.h>

int n = 0, k = 0;

int max(int a, int b)
{
    if (a >= b) {return a;}
    return b;
}

int function(int ind, int array[k])
{
    if (ind == k)
    {
        for (int i = 0; i < k; i++) {printf("%d ", array[i]);}
        printf("\n");
        return 0;
    }
    for (int i = array[max(ind - 1, 0)] + 1; i <= n - (k - ind); i++)
    {
        array[ind] = i;
        function(ind + 1, array);
    }
    return 0;
}

int main(void)
{
    scanf("%d %d", &n, &k);
    int arr[k];
    for (int i = 0; i < k; i++) {arr[i] = 0;}
    arr[0] = -1;
    function(0, arr);
    return 0;
}
