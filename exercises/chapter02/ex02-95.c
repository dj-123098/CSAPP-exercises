/* Compute 0.5*f. If f is NaN, then return f. */
float_bits float_half(float_bits f) {
    unsigned sign = f >> 31;
    unsigned exp  = (f >> 23) & 0xFF;
    unsigned frac = f & 0x7FFFFF;

    if (exp == 0xFF)
        return f;
    if (exp == 0)
        frac = frac >> 1;
    else
        exp = exp - 1;
    return (sign << 31) | (exp << 23) | frac;
}

