#include "Question_2.h"

int Question_2::Answer () {

	const int SUM_UNDER = 4000000;

	// Brute-forces through the Fibonacci sequence.
	int sum = 2;
	int a = 1;
	int b = 2;
	while (b < SUM_UNDER) {
		b += a;
		a = b - a;
		if (!(b % 2)) {
			sum += b;
		}
	}

	return sum;
}
