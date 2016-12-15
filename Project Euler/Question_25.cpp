#include "Question_25.h"
#include "BigIntegerLibrary.hh"


namespace Question_25 {

	int Count_Digits(BigInteger target) {
		int count = 0;
		while (target != 0) {
			target /= 10;
			count++;
		}
		return count;
	}

	long Answer() {
		 
		int index = 2;
		BigInteger fib_1 = 1;
		BigInteger fib_2 = 1;

		while (Count_Digits(fib_2) < 1000) {
			fib_2 = fib_1 + fib_2;
			fib_1 = fib_2 - fib_1;
			index++;
		}

		return index;
	}

}