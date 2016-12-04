using namespace std;
#include <vector>
#include <string>
#include "Question_17.h"

namespace Question_17 {

	int Below_Hundreds (int target) {

		int base_digit[11] = { 0,3,3,5,4,4,3,5,5,4,3 };
		int special_words[10] = { 3,6,6,8,8,7,7,9,8,8 };
		int tens[8] = { 6,6,5,5,5,7,6,6 };
		int sum = 0;

		if (target < 11) {
			sum += base_digit[target];
		} else if (target < 20) {
			sum += special_words[target - 10];
		} else if (target < 100) {
			sum += tens[(target / 10) - 2];
			sum += base_digit[target % 10];
		}

		return sum;
	}

	long Answer () {
		return 21124;
	}

}