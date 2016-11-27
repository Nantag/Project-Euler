using namespace std;
#include "Question_16.h"
#include <cmath>
#include "BigIntegerLibrary.hh"

int Question_16_Count_Digits (BigInteger target) {
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

	BigInteger digit_sum = 0;
	int digits = Question_16_Count_Digits (sum);

	while (digits > 0) {
		digit_sum += sum % 10;
		sum /= 10;
		cout << digit_sum << endl;
		digits--;
	}

	return digit_sum.toInt();
}
