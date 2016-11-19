#include "Question_9.h"
#include <math.h>

int Question_9 () {
	
	for (int m = 1; m < sqrt(500); m++) {
		for (int n = 1; n < m; n++) {
			if ((m * (m + n)) == 500) {
				return (((m * m) - (n * n)) * (2 * m * n) * ((m * m) + (n * n)));
			}
		}
	}

	// This algorithm will not return non-primitive pythagorian triples.
	return 0;
}
