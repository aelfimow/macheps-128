#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <quadmath.h>
#include "macheps128.h"


int main(int argc, char *argv[])
{
    argc = argc;
    argv = argv;

    struct fp_params param;

    macheps_fp128_init(&param);

    _Bool finished = 0;
    size_t cnt = 0;

    while (!finished)
    {
        macheps_fp128_compute(&param);

        finished = (0 == memcmp(&param.value, &param.sum, sizeof(__float128)));

        ++cnt;
    }

    char buffer[128];
    memset(buffer, 0, sizeof(buffer));

    quadmath_snprintf(buffer, sizeof(buffer), "%.36Qe", param.epsilon);

    printf("Machine epsilon (fp128):\n");
    printf("    Loop counter: %I64u\n", cnt);
    printf("    epsilon: %s\n", buffer);

    return EXIT_SUCCESS;
}
