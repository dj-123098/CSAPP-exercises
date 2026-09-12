unsigned unsigned_high_prod(unsigned x, unsigned y)
{
    int w = 8 * sizeof(unsigned);
    int xs = (int)x;
    int ys = (int)y;
    int s_h = signed_high_prod(xs, ys);

    unsigned x_msb = x >> (w - 1);
    unsigned y_msb = y >> (w - 1);
    int corr = x_msb * ys + y_msb * xs;

    return s_h + corr;
}
