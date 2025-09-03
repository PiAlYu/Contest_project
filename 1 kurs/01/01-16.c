#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, x3 = 0.0, y3 = 0.0;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double x = (x1 + x2 + x3) / 3;
    double y = (y1 + y2 + y3) / 3;
    printf("%lf %lf", x, y);
    return 0;
}
