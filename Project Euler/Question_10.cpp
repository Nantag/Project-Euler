#include "Question_10.h"
#include <stdlib.h>
#include <math.h>

long long Question_10 () {
	long long sum = 0;
	int bound = 2000000;
	int* Sieve_List = (int *) calloc (bound, sizeof (int));
	for (int i = 2; i < bound; i++) {
		if (!Sieve_List[i]) {
			for (int j = i; j < bound; j += i) {
				Sieve_List[j]++;
			}
			sum += i;
		}
	}
	free (Sieve_List);
	return sum;
}
