#include "Question_1.h"

int Question_1 () {

	int SUM_UNDER = 1000;
	int FIRST_NUMBER = 3;
	int SECOND_NUMBER = 5;
	int PRODUCT_NUMBER = FIRST_NUMBER * SECOND_NUMBER;

	// Optimal summation technique.
	int sum = 0;
	for (int i = FIRST_NUMBER; i < SUM_UNDER; i += FIRST_NUMBER) {
		sum += i;
	}
	for (int i = SECOND_NUMBER; i < SUM_UNDER; i += SECOND_NUMBER) {
		sum += i;
	}
	for (int i = PRODUCT_NUMBER; i < SUM_UNDER; i += PRODUCT_NUMBER) {
		sum -= i;
	}
	return sum;
}
