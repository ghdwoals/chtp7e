// Program will ask the user for two numbers.
// Will then print sum, product, difference, quotient, remainder.
// Program more "advanced" than this chapter. Playing around with taking in
// command line arguments.

#include <stdio.h>
#include <stdlib.h>

#define PROG_NAME "0216"

void usage(void);

int main(int argc, char *argv[]) {
    if (argc != 3)
        usage();

    int i;
    int num[argc];

    for (i = 1; i < 3; i++)
        if (atoi(argv[i]) == 0)
            usage();
        else
            num[i] = atoi(argv[i]);

    printf("%d + %d = %d\n", num[1], num[2], num[1] + num[2]);
    printf("%d * %d = %d\n", num[1], num[2], num[1] * num[2]);
    printf("%d - %d = %d\n", num[1], num[2], num[1] - num[2]);
    printf("%d / %d = %d\n", num[1], num[2], num[1] / num[2]);
    printf("%d %% %d = %d\n", num[1], num[2], num[1] % num[2]);

    return 0;
}

void usage(void) {
    printf("%s requires two integer arguments.\n", PROG_NAME);
    exit(EXIT_FAILURE);
}
