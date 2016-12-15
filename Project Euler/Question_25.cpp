#include "Question_25.h"
#include <math.h>

namespace Question_25 {

	int Answer() {

		const int DIGIT_NUMBER = 1;

		double GoldenRatio = 1.61803398875;
		return ceil(((log(10) * (DIGIT_NUMBER - 1)) + (log(5) / 2)) / (log(GoldenRatio)));
	}

}