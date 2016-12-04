#include "Question_1.h"

int Question_1::Answer () {

	const int SUM_UNDER = 1000;
	const int FIRST_NUMBER = 3;
	const int SECOND_NUMBER = 5;
	const int PRODUCT_NUMBER = FIRST_NUMBER * SECOND_NUMBER;

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
