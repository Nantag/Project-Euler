using namespace std;
#include "Question_12.h"
#include <cmath>

namespace Question_12 {

	int Count_Divisors (int target) {
		int target_divisors = 0;
		for (int n = 1; n < sqrt (target); n++) {
			if (!(target % n)) {
				target_divisors++;
				if (n != (target / n)) {
					target_divisors++;
				}
			}
		}
		return target_divisors;
	}

	int Answer () {

		const int MINIMUM_DIVISORS_WANTED = 501;

		// See header for formula.
		for (int n = 1;; n++) {
			int divisors = 0;
			if (n % 2) {
				divisors = Count_Divisors (n) * Count_Divisors ((n + 1) / 2);
			} else {
				divisors = Count_Divisors (n / 2) * Count_Divisors (n + 1);
			}
			if (divisors >= MINIMUM_DIVISORS_WANTED) {
				return ((n * (n + 1)) / 2);
			}
		}

		return -1;
	}

}