#include <stdlib.h>

typedef unsigned char *byte_pointer;
unsigned replace_byte (unsigned x, int i, unsigned char b)
{
    byte_pointer p = (byte_pointer)&x + sizeof(unsigned) - i - 1;
    *p = b;
}
