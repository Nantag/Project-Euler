#include "Question_3.h"

int Question_3 () {

	long long int TARGET_NUMBER = 600851475143;

	int prime = 2;
	while (TARGET_NUMBER > 1) {
		if (!(TARGET_NUMBER % prime)) {
			TARGET_NUMBER /= prime;
		} else {
			prime++;
		}
	}
	return prime;
}
