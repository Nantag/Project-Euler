#pragma once

namespace Question_13 {

	// Counts the digits in a number.
	int Count_Digits (unsigned long long target);

	// Returns the first 10 digits of the sum of the numbers in Question_13_Numbers.txt.
	long long Answer ();

}

// ALGORITHM:
//		We note that adding the entire numbers is not needed. We simply need to add the first 11 numbers of each number.
//		IO is relatively dificult to accomplish properly in C, so project  was moved over to C++ for this question.
//		Luckily, the author planned for this, so this move was simple.