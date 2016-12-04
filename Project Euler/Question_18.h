#pragma once

namespace Question_18 {

	// Finds the largest sum of adjacent numbers in a 15 row triangle
	long Answer ();

	// ALGORITHM:
	//		1: The last row of the triangle is equal to itself.
	//		2: Each entry of each row above the last is equal to itself plus the maximum of the two adjacent entries in the row below it.
	//		3: The first entry of the first row is the largest sum of adjacent numbers in the triangle.

	// This algorithm uses dynamic programming to work up from the bottom of the triangle to the top. 
	// By keeping track of the maximum sum achievable from any given entry, we eliminate all redundant calculations.

}