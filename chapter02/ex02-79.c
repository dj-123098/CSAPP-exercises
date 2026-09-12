int mul3div4(int x)
{
    x += x << 1;
    int bias = (x >> (8*sizeof(int) - 1)) & 3;
    return (x + bias) >> 2;
}
