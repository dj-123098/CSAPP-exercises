/* Determine whether arguments can be subtracted without overflow */
int tsub_ok(int x, int y)
{
    y = ~y + 1;
    int w = 8*sizeof(int);
    int sum = x + y;
    return (((x ^ y) | ~(sum ^ x)) >> (w - 1)) & 0x01;
}
