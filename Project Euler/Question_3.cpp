#include <stdio.h>

int Question_3 () {
	long long int target = 600851475143;
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
