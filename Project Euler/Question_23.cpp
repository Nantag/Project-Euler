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
		for (int i = 2; target > 1; i++) {
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

		int SOA_LIMIT = 20162;
		vector<BitSet> Number(SOA_LIMIT);

		// Checks if all numbers up to 20,161 are abundant.
		for (int i = 12; i <= 20161; i++) {
			if (!(Number[i].Abundant) && Proper_Divisors_Sum(i) > i) {
				Number[i].Abundant = 1;
				for (int j = (i * 2); j < SOA_LIMIT; j += i) {
					Number[j].Abundant = 1;
					Number[j].SOA = 1;
				}
			}
		}

		// Checks for all numbers up to 20,161 that can be written as sums of abundant numbers.
		for (int i = 24; i < SOA_LIMIT; i++) {
			if (!(Number[i].SOA)) {
				// TODO: Implement algorithm to check for sums.
			}
		}

		// Sums all number which are sums of abundants.
		long sum = 0;
		for (int i = 24; i < SOA_LIMIT; i++) {
			if (Number[i].SOA) {
				sum += i;
			}
		}

		return sum;
	}

}