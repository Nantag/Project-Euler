#include "Question_3.h"

int Question_3::Answer () {

	const long long TARGET_NUMBER = 600851475143;

	// Uses unique factorization theorem to determine number's prime factors. 
	long long target = TARGET_NUMBER;
	int prime = 2;
	while (target > 1) {
		if (!(target % prime)) {
			target /= prime;
		} else {
			++prime;
		}
	}

	return prime;
}
