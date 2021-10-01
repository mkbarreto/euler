#include <stdio.h>

int main() {
	int p1 = 3;
	int p2 = 5;
	int max_val = 1000;
	int sum = 0;

	for (int i = 0; i < max_val; i++)
		if (i % p1 == 0 || i % p2 == 0) {
			sum += i;
		}

	printf("the sum of all integer multiples of %d or %d less than %d is %d\n", p1, p2, max_val, sum);
}