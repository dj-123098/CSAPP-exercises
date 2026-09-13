/* Addition that saturates to TMin or TMax */
int saturating_add(int x, int y)
{
    int w = 8*sizeof(int);
    int z = x + y;
    int sign_x = x >> (w - 1);
    int sign_y = y >> (w - 1);
    int sign_z = z >> (w - 1);

    int res = z & ~(~sign_x & ~sign_y & sign_z) & ~(sign_x & sign_y &~sign_z);
    res |= ~sign_x & ~sign_y & sign_z & INT_MAX;
    res |= sign_x & sign_y &~sign_z & INT_MIN;
    return res;
}
