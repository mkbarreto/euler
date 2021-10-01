#include <stdio.h>

int main() {
	int fibs[] = {0,1,2};
	int evens_sum = 2;	//cheat here bc the first two indices are squashed

	int max_val = 4*10E6;
	for (int act_ind = 0; fibs[act_ind] < max_val; act_ind = (act_ind + 1)%3) {
		const auto ind_A = (act_ind + 1)%3;
		const auto ind_B = (act_ind + 2)%3;

		fibs[act_ind] = fibs[ind_A] + fibs[ind_B];
		printf("%d\n",fibs[act_ind]);
		if (fibs[act_ind] % 2 == 0) {
			evens_sum += fibs[act_ind];
		}
	}

	printf("The sum of even fibonacci terms less than %d is %d\n", max_val, evens_sum);
}