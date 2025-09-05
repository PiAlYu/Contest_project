#include <stdio.h>
#include <ctype.h>

void
print_code(int code)
{
    int new_code = (code ^ 8) & ~4;
    if (new_code == 0) {
        printf("@");
    } else if (new_code == 63) {
        printf("#");
    } else if (new_code >= 1 && new_code <= 10) {
        printf("%c", '0' + new_code - 1);
    } else if (new_code >= 11 && new_code <= 36) {
        printf("%c", 'a' + new_code - 11);
    } else if (new_code >= 37 && new_code <= 62) {
        printf("%c", 'A' + new_code - 37);
    }
}

int
main(void)
{
    int c, code;
    while ((c = getchar()) != EOF) {
        if (isdigit(c)) {
            code = c - '0' + 1;
            print_code(code);
        } else if (islower(c)) {
            code = c - 'a' + 11;
            print_code(code);
        } else if (isupper(c)) {
            code = c - 'A' + 37;
            print_code(code);
        }
    }
    return 0;
}
