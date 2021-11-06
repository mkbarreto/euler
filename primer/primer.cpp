#include "primer.hpp"

// Add the first N primes to 
Primer::Primer(size_t N, bool cap_at_N) {

	this->my_primes.resize(N);
	if (N > 0)
		my_primes[0] = 2;

	size_t i = 1, d = 3;
	for (; (!cap_at_N && i < N) || (cap_at_N && d < N); d++) {
		bool d_prime = true;
		for(size_t j = 0; d_prime &&
			(this->my_primes[j]) * (this->my_primes[j]) <= d; j++) {
			d_prime = d % (this->my_primes[j]) != 0;
		}

		if (d_prime)
			this->my_primes[i++] = d;
	}

	if (cap_at_N)
		this->my_primes.resize(i);
}

Primer Primer::AsManyAs(size_t N) {
	return Primer(N, false);
}

Primer Primer::LessThan(size_t N) {
	return Primer(N, true);
}


std::vector<std::tuple<size_t,size_t>> Primer::factorize(size_t N) const {
	if ((this->my_primes.back()) * (this->my_primes.back()) < N) {
		//TODO: Not segfault
	}

	std::vector<std::tuple<size_t,size_t>> facs;
	for (const auto& p : this->my_primes) {
		size_t pcnt = 1;
		while (N % p == 0) {
			N /= p;
			pcnt++;
		}
		auto tmp = std::tuple(p,pcnt);
		facs.emplace_back(tmp);
	}

	return facs;
}
