#include "../primer/primer.hpp"

#include <algorithm>

int main() {
	size_t N = 20;
	Primer P = Primer::LessThan(N);
	// P.print();

	std::vector<std::tuple<size_t,size_t>> factors = {};
	for (size_t n = 2; n <= N; n++) {
		for (auto fac : P.factorize(n)) {
			//TODO: find by factor and then choose largest of values
			// auto find_fac = std::find(begin(factors),end(factors),fac);
			// if (find_fac == std::end(factors)) {
			// 	factors.emplace_back(fac);
			// 	printf("%zu\n",fac);
			// }
		}
	}
}