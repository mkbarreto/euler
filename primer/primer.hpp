#include <vector>
#include <tuple>
#include <stdio.h>

class Primer {
	Primer(size_t N, bool cap_at_N);
public:
	std::vector<size_t> my_primes = {};

	static Primer AsManyAs(size_t N);
	static Primer LessThan(size_t N);

	void print() const {
		for (const auto& p : this->my_primes)
			printf("%zu,",p);
		printf("\n");
	}

	//find factors of given N. Prints error if N is too large to do so
	std::vector<std::tuple<size_t,size_t>> factorize(size_t N) const;
};
