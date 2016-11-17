#include <stdlib.h>
#include <math.h>
#include "Question_5.h"

bool IsPrime (int target) {
	for (int i = 2; i <= sqrt (target); i++) {
		if (!(target % i)) {
			return 0;
		}
	}
	return 1;
}

int Question_5 () {

	/* Simple brute force solution
	for (int i = 20;; i += 20) {
		for (int j = 19; j > 1; j--) {
			if (i % j) {
				break;
			} else if (j == 2) {
				return i;
			}
		}
	} */

	// Algorithm detailed in header file.
	long sum = 1;
	int* primes = (int*) malloc(20 * sizeof(int));
	for (int i = 2; i < 20; i++) {
		if (IsPrime (i)) {
			sum *= i;
			primes[i] = 1;
		} else {
			primes[i] = 0;
		}
	}
	for (int i = 2; i < 20; i++) {
		if (primes[i]) {
			int powers = i*i;
			while (powers <= 20) {
				sum *= i;
				powers *= i;
			}
		}
	}
	free (primes);
	return sum;
}
