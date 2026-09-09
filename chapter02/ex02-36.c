/* Determine whether arguments can be multiplied without overflow */
int tmult_ok(int x, int y)
{
	int64_t p = x * y;
	return p >> 32;
}
