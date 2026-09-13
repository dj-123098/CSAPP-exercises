/* Copy integer into buffer if space is available */
/* WARNING: The following code is buggy */
void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes-sizeof(val) >= 0)
    memcpy(buf, (void *) &val, sizeof(val));
}

/* A */
/* unsigned always >= 0 */

/* B */
void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes >= sizeof(val))
    memcpy(buf, (void *) &val, sizeof(val));
}
