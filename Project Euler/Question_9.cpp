using namespace std;
#include "Question_9.h"
#include <cmath>

int Question_9 () {

	// For most values, the function will return an error value.
	const int TARGET_SUM = 1000;
	const int HALF_TARGET = TARGET_SUM / 2;
	
	for (int m = 1; m < sqrt(HALF_TARGET); m++) {
		for (int n = 1; n < m; n++) {
			if ((m * (m + n)) == HALF_TARGET) {
				return (((m * m) - (n * n)) * (2 * m * n) * ((m * m) + (n * n)));
			}
		}
	}

	// This algorithm will not return non-primitive pythagorian triples.
	return -1;

}
