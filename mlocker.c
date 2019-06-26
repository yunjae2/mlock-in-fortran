#include <stdio.h>
#include <sys/mman.h>

int mlock_(const void *addr, int *len_ptr)
{
	size_t len;
	int ret;

	len = *len_ptr;
	printf("[mlocker] addr: %p, len: %zd\n", addr, len);

	ret = mlock(addr, len);
	if (ret)
		printf("[mlocker] mlock failed!\n");
	else
		printf("[mlocker] mlock success!\n");

	return ret;
}
