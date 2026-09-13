unsigned srl (unsigned x, int k)
{
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    return xsra & ((1 << (8*sizeof(int) - k)) - 1);
}

int sra(int x, int k)
{
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;
    int sign = 1 << (8*sizeof(int) - 1);
    return xsrl | ((x & sign) ? (~0 << (8*sizeof(int) - k)) : 0);
}
