#include <stdio.h>
#include <sys/mman.h>

int mlock_(const void *addr, int *len_ptr)
{
	size_t len;
	int ret;

	len = *len_ptr;
	ret = mlock(addr, len);

	return ret;
}
