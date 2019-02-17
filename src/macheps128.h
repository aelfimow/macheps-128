#ifdef MACHEPS_128_H
#error Already included
#else
#define MACHEPS_128_H

struct fp_params
{
    __float128 value;
    __float128 epsilon;
    __float128 sum;
};

void macheps_fp128_init(struct fp_params *param);
void macheps_fp128_compute(struct fp_params *param);

#endif
