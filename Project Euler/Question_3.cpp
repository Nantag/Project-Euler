#include "Question_3.h"

int Question_3 () {

	const long long TARGET_NUMBER = 600851475143;

	long long target = TARGET_NUMBER;
	int prime = 2;
	while (target > 1) {
		if (!(target % prime)) {
			target /= prime;
		} else {
			prime++;
		}
	}
	return prime;
}
