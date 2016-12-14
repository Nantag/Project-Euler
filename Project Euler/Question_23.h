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

// The following properties of abundant numbers are used:
//		1. Every multiple of a perfect number is an abundant number.
//		2. Every multiple of an abundant number is an abundant number.
//		3. Every integer greater than 20,161 can be written as the sum of two abundant numbers.
//		4. The first abundant number is 12.

// ALGORITHM:
//		1. Find all abundant numbers below 20,161 and store them in a vector.
//		2. 