#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

enum
{
    SYSTEM_BASE = 10,
    NUMBER_OF_NUMBERS = 3,
    WHERE_N = 2,
    MIN_N = 2
};

int
main(int argc, char *argv[])
{
    if (argc != NUMBER_OF_NUMBERS) {
        return 1;
    }

    int file = open(argv[1], O_RDWR);
    if (file == -1) {
        return 1;
    }

    off_t file_size = lseek(file, 0, SEEK_END);
    if (file_size == -1) {
        close(file);
        return 1;
    }

    char *endptr = NULL;
    long n = strtol(argv[WHERE_N], &endptr, SYSTEM_BASE);
    if (endptr == argv[WHERE_N] || *endptr || n < MIN_N) {
        close(file);
        return 1;
    }

    size_t numbers = file_size / sizeof(double);
    if (n > numbers) {
        n = numbers;
    }

    double prev = 0, current;
    if (lseek(file, 0, SEEK_SET) == -1) {
        close(file);
        return 1;
    }
    for (long i = 0; i < n; i++) {
        if (read(file, &current, sizeof(double)) != sizeof(double)) {
            close(file);
            return 1;
        }
        current = current - prev;
        if (lseek(file, -sizeof(double), SEEK_CUR) == -1) {
            close(file);
            return 1;
        }
        if (write(file, &current, sizeof(double)) != sizeof(double)) {
            close(file);
            return 1;
        }
        prev = current;
    }
    close(file);
    return 0;
}
