using namespace std;
#include "Question_23.h"
#include <vector>
#include <stdbool.h>

namespace Question_23 {

	int Proper_Divisors_Sum(int target) {

		int target_backup = target;
		int sum = 1;
		int power = 0;

		// Finds the prime factors of the target.
		for (int i = 2; target > 1; ++i) {
			while (!(target % i)) {
				target /= i;
				power++;
			}

			// Finds the divisors using the algorithm detailed in the header file.
			if (power != 0) {
				if (power == 1) {
					sum *= (i + 1);
				} else {
					sum *= ((pow(i, power + 1) - 1) / (i - 1));
				}
				power = 0;
			}

		}

		// Remove the only non-proper divisor from the sum.
		sum -= target_backup;

		return sum;
	}

	long Answer() {

		const int SOA_LIMIT = 20162;
		int sum = 0;
		vector<int> AbundantNumbers;
		vector<bool> SOA(SOA_LIMIT);

		// Finds all abundant numbers below the limit, synchronously finding all numbers expressible by their sum.
		for (int i = 1; i < SOA_LIMIT; ++i) {
			if (Proper_Divisors_Sum(i) > i) {
				AbundantNumbers.emplace_back(i);
				for (auto j : AbundantNumbers) {
					if ((i + j) < SOA_LIMIT) {
						SOA[i + j] = 1;
					} else {
						break;
					}
				}
			}
		}

		// Sums up all numbers not expressible by the sum of two abundant numbers.
		for (int i = 0; i < SOA_LIMIT; ++i) {
			if (!SOA[i]) {
				sum += i;
			}
		}

		return sum;
	}

}