#include "macheps128.h"

void macheps_fp128_init(struct fp_params *param)
{
    param->value = 1.0Q;
    param->epsilon = 1.0Q;
    param->sum = param->value + param->epsilon;
}

void macheps_fp128_compute(struct fp_params *param)
{
    param->epsilon /= 2.0Q;

    param->sum = param->value + param->epsilon;
}
