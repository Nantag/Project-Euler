#include "Question_4.h"

int Question_4::Answer () {

	const int PALINDROME_MINIMUM = 100;
	const int PALINDROME_MAXIMUM = 999;
	
	// Brute-forces through all possible numbers.
	int largest = 0;
	for (int i = PALINDROME_MAXIMUM; i > PALINDROME_MINIMUM; i--) {
		for (int j = PALINDROME_MAXIMUM; j > PALINDROME_MINIMUM; j--) {
			int mult = i * j;
			int mult_cp = mult;
			int reverse = 0;
			while (mult_cp) {
				reverse = (reverse * 10) + (mult_cp % 10);
				mult_cp /= 10;
			}
			if (reverse == mult && mult > largest) {
				largest = mult;
			}
		}
	}

	return largest;
}