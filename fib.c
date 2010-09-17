#include <stdio.h>

main() {
	int fib, fib1, fib2;

	fib1 = fib2 = 1;
	printf("%d, %d", fib1, fib2);
	do {
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		printf(", %d", fib);
	} while (fib < 1000000);
	printf("\n");
}
