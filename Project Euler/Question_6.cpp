using namespace std;
#include <algorithm>
#include "Question_6.h"

long long Question_6::Answer () {

	const int TARGET_MAXIMUM = 100;

	return (long long) (pow (((TARGET_MAXIMUM * (TARGET_MAXIMUM + 1)) / 2), 2) - ((TARGET_MAXIMUM * (TARGET_MAXIMUM + 1) * ((2 * TARGET_MAXIMUM) + 1)) / 6));
} 