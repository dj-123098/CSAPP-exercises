/*
* Compute (int) f.
* If conversion causes overflow or f is NaN, return 0x80000000
*/
int float_f2i(float_bits f)
{
    unsigned sign = f >> 31;
    unsigned exp = (f >> 23) & 0xFF;
    unsigned frac = f & 0x7FFFFF;
    int E = exp - 127;
    unsigned mag;

    if (exp == 0xFF || E >= 31)
        return 0x80000000;
    if (exp == 0 || E < 0)
        return 0;
    mag = (1U << 23) | frac;
    if (E > 23)
        mag <<= E - 23;
    else
        mag >>= 23 - E;
    if (sign)
        return -mag;
    return mag;
}
