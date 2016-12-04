using namespace std;
#include "Question_10.h"
#include <algorithm>
#include <vector>

long long Question_10::Answer () {

	const int PRIMES_BELOW = 2000000;

	// Sieves through primes up to the bound.
	long long sum = 0;
	vector<int> Sieve_List (PRIMES_BELOW);
	for (int i = 2; i < PRIMES_BELOW; i++) {
		if (!Sieve_List[i]) {
			for (int j = i; j < PRIMES_BELOW; j += i) {
				Sieve_List[j]++;
			}
			sum += i;
		}
	}

	return sum;
}
