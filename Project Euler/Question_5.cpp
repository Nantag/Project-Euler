using namespace std;
#include <cmath>
#include "Question_5.h"

bool IsPrime (int target) {
	for (int i = 2; i <= sqrt(target); i++) {
		if (!(target % i)) {
			return 0;
		}
	}
	return 1;
}

int Question_5 () {

	int TARGET_MAXIMUM = 20;

	// Algorithm detailed in header file.
	long sum = 1;
	for (int i = 2; i < TARGET_MAXIMUM; i++) {
		if (IsPrime (i)) {
			int j = i;
			while (j <= TARGET_MAXIMUM) {
				sum *= i;
				j *= i;
			}
		}
	}
	return sum;
}
