#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
    double x, y;
    int flag = 0;
    scanf("%lf", &x);
    scanf("%lf", &y);
    if (y >= 3 && y <= 7 && x >= 2 && x <= 5)
    {
        flag = 1;
        printf("1\n");
    }
    else if (y >= 1 && y <= 3 && x >= 2 && x <= 3)
    {
        flag = 1;
        printf("1\n");
    }
    else if (y >= 1 && y < 3 && x > 3 && x <= 5 && ((y - 1) >= (x - 3)))
    {
        flag = 1;
        printf("1\n");
    }
    if (flag == 0)
    {
        printf("0\n");
    }
    return 0;
}
