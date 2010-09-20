#include <stdio.h>

int main() {
	int num1, num2, remainder;
	char ch;

	printf("Enter a dividend and a divisor for modulo division:\n");
	scanf("%d%c%d", &num1, &ch, &num2);

	remainder = num1 % num2;

	printf("%d\n", remainder);

	return 0;
}
