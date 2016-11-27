using namespace std;
#include <vector>
#include "Question_14.h"

long long Collatz (long long target, vector<long long>& seen_array, int MAX_NUMBER) {

	long long new_target = target;

	if (target == 1) {
		return 0;
	} else if (target < MAX_NUMBER && seen_array[(int) target] != 0) {
		return seen_array[(int)target];
	} else if (target % 2) {
		new_target = ((3 * target) + 1);
	} else {
		new_target /= 2;
	}

	if (target < MAX_NUMBER) {
		seen_array[(int) target] = (1 + Collatz (new_target, seen_array, MAX_NUMBER));
		return seen_array[(int) target];
	}
	return (1 + Collatz (new_target, seen_array, MAX_NUMBER));
}

long long Question_14 () {

	int MAX_NUMBER = 1000000;

	vector <long long> previously_seen ((int) MAX_NUMBER);
	long long gsf = 1;
	int gsf_i = 1;

	for (int i = 1; i < MAX_NUMBER; i++) {
		long long next_seq = Collatz (i, previously_seen, MAX_NUMBER);

		if (next_seq > gsf) {
			gsf = next_seq;
			gsf_i = i;
		}
	}

	return gsf_i;
}