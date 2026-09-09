typedef unsigned char *byte_pointer;
int is_little_endian(void)
{
    int i = 1;
    byte_pointer pi = (byte_pointer)&i;
    if (*pi == 0x01)
	return 1;
    return 0;
}
