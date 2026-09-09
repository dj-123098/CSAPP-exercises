#include <limits.h>
/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y)
{
	return UINT_MAX - x >= y;
}
