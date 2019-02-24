# macheps-128
Computation of the machine epsilon (macheps) with 128-bit floating point type.

The approximating algorithm looks like:
```
value = 1.0;
epsilon = 1.0;
sum = value + epsilon;

while (value != sum)
{
    epsilon = epsilon / 2.0;
    sum = value + epsilon;
}
```

The approach used [here](src) is:
* 128-bit floating point data type is `__float128`
* GCC libquadmath is used
* Comparison of the `value` and `sum` is done raw with `memcmp()` function
* Additionally the loops are counted and printed out with the `epsilon`

## Output
```
Machine epsilon (fp128):
    Loop counter: 113
    epsilon: 9.629649721936179265279889712924636593e-35
    epsilon2: 1.925929944387235853055977942584927319e-34

Machine epsilon (libquadmath): 1.925929944387235853055977942584927319e-34
```

## Note
See also [macheps](https://github.com/aelfimow/macheps).
