#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int function(int a)
{
    if (a == 0) {return 0;}
    int b = 0;
    scanf("%d", &b);
    b = function(b);
    if (b != 0) {printf("%d ", b);}
    return a;
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    n = function(n);
    if (n != 0) {printf("%d ", n);}
    return 0;
}
