// My UINT_MAX & ULONG_MAX are -1. 
// Surely they're not infinite. 
// This is with both GCC and Clang.
// Not sure what's going on here.

#include <stdio.h>
#include <limits.h>

int main() {
	printf("INT_MAX = %d\n", INT_MAX);
	printf("INT_MIN = %d\n", INT_MIN);
	printf("SHRT_MAX = %d\n", SHRT_MAX);
	printf("SHRT_MIN = %d\n", SHRT_MIN);
	printf("LONG_MAX = %ld\n", LONG_MAX);
	printf("LONG_MIN = %ld\n", LONG_MIN);
	printf("USHRT_MAX = %d\n", USHRT_MAX);
	printf("UINT_MAX = %d\n", UINT_MAX);
	printf("ULONG_MAX = %ld\n", ULONG_MAX);

	return 0;
}
