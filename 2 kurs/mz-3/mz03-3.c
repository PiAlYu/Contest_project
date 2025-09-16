#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

enum
{
    MAX_PERCENT = 100,
    MAX_COURSE = 10000
};

int
main(int argc, char *argv[])
{
    if (argc == 1) {
        return 1;
    }
    double course, change;
    char *endptr = NULL;
    errno = 0;
    course = strtod(argv[1], &endptr);
    if (errno || endptr == argv[1] || course > MAX_COURSE || course < 0) {
        return 1;
    }
    course *= MAX_COURSE;
    for (int i = 1 + 1; i < argc; i++) {
        change = strtod(argv[i], &endptr);
        if (errno || *endptr || endptr == argv[i] || change <= -MAX_PERCENT) {
            return 1;
        }
        if (change >= MAX_PERCENT || course > MAX_COURSE * MAX_COURSE) {
            return 1;
        }
        course *= (change / MAX_PERCENT + 1);
        course = round(course);
    }
    printf("%.4lf\n", course / MAX_COURSE);
    return 0;
}
