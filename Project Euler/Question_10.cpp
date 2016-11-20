#include "Question_10.h"
#include <stdlib.h>
#include <math.h>

long long Question_10 () {

	int PRIMES_BELOW = 2000000;

	long long sum = 0;
	int* Sieve_List = (int *) calloc (PRIMES_BELOW, sizeof (int));

	for (int i = 2; i < PRIMES_BELOW; i++) {
		if (!Sieve_List[i]) {
			for (int j = i; j < PRIMES_BELOW; j += i) {
				Sieve_List[j]++;
			}
			sum += i;
		}
	}

	free (Sieve_List);
	return sum;
}
