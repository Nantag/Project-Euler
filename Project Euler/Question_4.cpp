#include "Question_4.h"

int Question_4 () {
	int largest = 0;
	for (int i = 999; i > 100; i--) {
		for (int j = 999; j > 100; j--) {
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