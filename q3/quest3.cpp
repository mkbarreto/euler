#include <stdio.h>
#include <vector>

std::vector<size_t> primefacs(size_t N) {
	std::vector<size_t> facs = { 1 };

	size_t d = 2;
	while (d*d < N) {
		while (N % d == 0) {
			facs.emplace_back(d);
			N /= d;
		}
		d++;
	}
	if (N > 1) {
		facs.emplace_back(N);
	}

	return facs;
}

int main() {
	size_t check_val = 600851475143;
	const auto factors = primefacs(check_val);
	printf("The largest prime factor of %zu is %zu\n", check_val, factors.back());
}