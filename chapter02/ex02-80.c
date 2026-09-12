int threefourths(int x)
{
    int bias = (x >> (8*sizeof(int) - 1)) & 3;
    return x - ((x + bias) >> 2);
}
