#include <stdio.h>
#include <stdlib.h>

int n = 100;

int test(void)
{
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }
    printf("\n");
    return 1;
}

// Пирогов Александр, ВМК, группа 105
int main(void)
{
    int arr[n], a = 0;
    scanf("%d", &a);
    test();
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);;
    return 0;
}
