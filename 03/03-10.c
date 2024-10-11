#include <stdio.h>
#include <stdlib.h>

int function(void)
{
    int a = 0;
    if (scanf("%d", &a)) {return a;}
    char s;
    scanf("%c", &s);
    if (s == '*') {return function() * function();}
    return function() / function();
}

int main(void)
{
    printf("%d", function());
    return 0;
}
