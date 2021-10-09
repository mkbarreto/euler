#include <stdio.h>
#include <vector>

// returns primes with value less than N (min val = 3) in ascending order
std::vector<size_t> primes_under(size_t N) {
	std::vector<size_t> primes = { 2 };

	for (size_t d = 3; d < N; d++) {
		bool d_is_prime = true;
		for (const auto& p : primes) {
			if (d % p == 0) {
				d_is_prime = false;
				goto primes_checked;
			}
		}

primes_checked:		// Stack Overflow told me to ;_;
		if (d_is_prime)
			primes.emplace_back(d);
	}

	std::reverse(primes.begin(),primes.end());
	return primes;
}

bool is_palindromic(size_t N) {
	std::vector<size_t> digits;
	while (N > 0) {
		digits.emplace_back(N%10);
		N /= 10;
	}

	for(size_t i = 0; i*2 <= digits.size(); i++) {
		if (digits[i] != digits[digits.size() - (i+1)])
			return false;
	}
	return true;
}


int main() {
	const auto primes_3dig = primes_under(999);

	size_t p1 = 0, p2 = 0;
	auto N = primes_3dig.size();
	for(size_t i = 0; i < N - 1; i++) {
palindrome_found:
		//TODO: add logic below skipping checks on smaller products
		for (size_t j = i+1; j < N; j++) {
			const auto tmp = primes_3dig[i]*primes_3dig[j];
			if (is_palindromic(tmp) and tmp > p1*p2) {
				p1 = primes_3dig[i];
				p2 = primes_3dig[j];
				goto palindrome_found;
			}
		}
	}

	printf("The largest palindromic product of two 3-digit primes is %zu, the product of %zu and %zu\n", p1*p2, p1, p2);
}