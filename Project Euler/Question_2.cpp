#include "Question_2.h"

int Question_2 () {
	int sum = 2;
	int a = 1;
	int b = 2;
	while (b < 4000000) {
		b += a;
		a = b - a;
		if (!(b % 2)) {
			sum += b;
		}
	}
	return sum;
}
