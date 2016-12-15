#pragma once

namespace Question_25 {

	// Finds the index of the first Fibonaci number with 1,000 digits.
	int Answer();


	// A workable algorithm is brute force, by simply going through the Fibonaci sequence until a 1000 digit number is found.
	// This is not an unworkable solution. It requires roughly 6 minutes of computer work, but will execute in a reasonable ammount of time.
	// However, there is a simple formula that executes immediately.

	// FORMULA:
	//		Let GR represent the Golden Ratio.
	//		An approximation of the nth Fibonacci number is (GR)^n / sqrt(5).
	//		Note the first possible number with x number of digits is 10^x, by definition of base 10.
	//		So if we solve for (GR)^n / sqrt(5) = 10^x, we will find, approximately, the first Fibonacci number with x digits.
	//		With re-arranging and isolation, n =  (((log(10) * (x - 1)) + (log(5) / 2)) / (log(GR))).
	//		We then use the ceiling function on this number, and the remaining number is approximately the answer.
	//		This approximation becomes more accurate with a larger index, but care must be taken when requesting a small index.

}