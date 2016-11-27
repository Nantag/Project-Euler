using namespace std;
#include "Question_16.h"
#include <cmath>
#include "BigIntegerLibrary.hh"

int Count_Digits (BigInteger& target) {
	int count = 0;
	while (target != 0) {
		target /= 10;
		count++;
	}
	return count;
}


int Question_16 () {

	int POWER_NUMBER = 2;
	int TO_POWER = 1000;

	BigInteger sum = POWER_NUMBER;
	for (int i = 0; i < (TO_POWER - 1); i++) {
		sum *= POWER_NUMBER;
	}

	int digit_sum = 1;

	return digit_sum;
}
