using namespace std;
#include <vector>
#include <algorithm>
#include "Question_7.h"

int Question_7::Answer () {

	const int TARGET_PRIME = 10001;

	// Finds the upper bound of the prime.
	int bound = (int) (TARGET_PRIME * (log (TARGET_PRIME) + log (log (TARGET_PRIME))));

	// Sieves through primes up to the bound.
	int Prime_Index = 0;
	vector<int> Sieve_List (bound);
	int i = 1;
	while (Prime_Index < TARGET_PRIME) {
		i++;
		if (!Sieve_List[i]) {
			for (int j = i; j < bound; j += i) {
				Sieve_List[j]++;
			}
			Prime_Index++;
		}
	}

	return i;
}