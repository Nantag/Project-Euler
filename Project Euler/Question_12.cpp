#include "Question_12.h"
#include <math.h>
#include <stdio.h>

int Question_12 () {

	int gsf = 0;
	int tri = 0;

	for (int i = 1; gsf < 501; i++) {
		int divisors = 0;
		tri += i;
		for (int j = 1; j < sqrt (tri); j++) {
			if (!(tri % j)) {
				divisors++;
				if (j != (tri / j)) {
					divisors++;
				}
			}
		}
		if (divisors >= gsf) {
			gsf = divisors;
		}
	}

	return tri;
}