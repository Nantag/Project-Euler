using namespace std;
#include "Question_21.h"
#include <math.h>

namespace Question_21 {

	int Proper_Divisors_Sum (int target) {
		int limit = (target / 2) + 1;
		int sum = 0;
		for (int i = 1; i < limit; i++) {
			if (!(target % i)) {
				sum += i;
			}
		}
		return sum;
	}

	int Answer () {
		int sum = 0;
		for (int i = 2; i < 10000; i++) {
			int a = Proper_Divisors_Sum (i);
			if (a > i) {
				int b = Proper_Divisors_Sum (a);
				if (i == b) {
					sum += a;
					sum += b;
					i = a + 1;
				}
			}
		}
		return sum;
	}

}