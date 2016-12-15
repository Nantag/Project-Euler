using namespace std;
#include "Question_21.h"
#include <math.h>

namespace Question_21 {

	int Proper_Divisors_Sum (int target) {

		int target_backup = target;
		int sum = 1;
		int power = 0;

		// Finds the prime factors of the target.
		for (int i = 2;target > 1; i++) {
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

	int Answer () {

		const int AMICABLE_UP_TO = 10000;

		int sum = 0;
		for (int i = 2; i < AMICABLE_UP_TO; i++) {

			// Checks if a given number is amicable.
			int a = Proper_Divisors_Sum (i);
			if (a > i) {
				int b = Proper_Divisors_Sum (a);

				// Sums the amicable numbers.
				if (i == b) {
					sum += a;
					sum += b;
					i = a + 1;
				}

			}

		}
		return sum;
	}

}