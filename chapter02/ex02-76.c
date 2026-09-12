void *calloc(size_t nmeb, size_t size)
{
    void *res = malloc(nmeb * size);
    memset(res, 0, nmeb * size);
    return res;
}
