#include "Question_1.h"

int Question_1 () {

	/* Simple brute force solution.
	int sum = 0;
	for (int i = 3; i < 1000; i++) {
		if (!(i % 3) || !(i % 5)) {
			sum += i;
		}
	}
	return sum;
	*/

	// Optimal summation technique.
	int sum = 0;
	for (int i = 3; i < 1000; i += 3) {
		sum += i;
	}
	for (int i = 5; i < 1000; i += 5) {
		sum += i;
	}
	for (int i = 15; i < 1000; i += 15) {
		sum -= i;
	}
	return sum;
}
