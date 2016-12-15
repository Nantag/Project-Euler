#pragma once

namespace Question_23 {

	struct BitSet {
		bool Abundant = 0;
		bool SOA = 0;
	};

	// Finds the sum of proper divisors of a number.
	int Proper_Divisors_Sum(int target);
	
	// Finds the sum of all numbers that cannot be expressed as the sum of two abundant numbers.
	long Answer();

}

// Really happy with this answer. Started with an algorithm that used over 20 seconds of time, ended with one that uses ~120ms.

// The following properties of abundant numbers are used:
//		1. Every integer greater than 20,161 can be written as the sum of two abundant numbers.
//		2. The first abundant number is 12.

// ALGORITHM:
//		1. Find abundant numbers by checking each number for it's proper divisor sum.
//		2. For every abundant number found, add it to all previous abundant numbers. Store the numbers found in a boolean array.
//		3. Add all numbers not in the boolean array. 
//		The resultant sum is the answer.