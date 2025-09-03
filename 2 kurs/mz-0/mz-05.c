#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recursion(char *str, char *alp, int l, int n)
{
    if (l == n) printf("%s\n", str); // вывод ответа
    else {
        char *strc = malloc(sizeof(str));   // создание копии
        strcpy(strc, str);
        strc[n] = '\0';
        for (int i = 0; i < n; i++) {
            if (alp[i] != '0') {
                strc[l++] = alp[i];         // добавление символа
                alp[i] = '0';               // исключение из алфавита
                recursion(strc, alp, l, n); // вызов рекурсии
                alp[i] = '1' + i;           // возврат к алфавиту
                l--;
            }
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);                // считывание n
    char alp[n], str[n + 1];
    for (int i = 0; i < n; i++) alp[i] = '1' + i; // создание алфавита
    recursion(str, alp, 0, n);           // вызов рекурсии
    return 0;
}
