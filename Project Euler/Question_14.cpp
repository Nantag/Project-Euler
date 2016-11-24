#include <stdlib.h>
#include "Question_14.h"

long long Collatz (long long target, int* seen_array, int MAX_NUMBER) {

	long long new_target = target;

	if (target == 1) {
		return 0;
	} else if (target < MAX_NUMBER && seen_array[target] != 0) {
		return seen_array[target];
	} else if (target % 2) {
		new_target = ((3 * target) + 1);
	} else {
		new_target /= 2;
	}

	if (target < MAX_NUMBER) {
		seen_array[target] = (1 + Collatz (new_target, seen_array, MAX_NUMBER));
		return seen_array[target];
	} else {
		return (1 + Collatz (new_target, seen_array, MAX_NUMBER));
	}

}

int Question_14 () {

	int MAX_NUMBER = 1000000;

	int* previously_seen = (int*) calloc (MAX_NUMBER, sizeof (int));
	int gsf = 1;
	int gsf_i = 1;

	for (int i = 1; i < MAX_NUMBER; i++) {
		int next_seq = Collatz (i, previously_seen, MAX_NUMBER);

		if (next_seq > gsf) {
			gsf = next_seq;
			gsf_i = i;
		}
	}

	free (previously_seen);
	return gsf_i;
}