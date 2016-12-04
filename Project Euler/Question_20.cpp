#include "Question_20.h"

namespace Question_20 {

	int Count_Digits (BigInteger target) {
		int count = 0;
		while (target != 0) {
			target /= 10;
			count++;
		}
		return count;
	}

	int Answer () {

		int FACTORIAL_NUMBER = 100;

		// Determines 100!.
		BigInteger sum = 1;
		for (int i = 1; i <= FACTORIAL_NUMBER; i++) {
			sum *= i;
		}

		// Sums the digits.
		BigInteger digit_sum = 0;
		int digits = Count_Digits (sum);
		while (digits > 0) {
			digit_sum += sum % 10;
			sum /= 10;
			digits--;
		}

		return digit_sum.toInt ();
	}

}