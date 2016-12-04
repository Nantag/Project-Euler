#pragma once
using namespace std;
#include <vector>

namespace Question_14 {

	// Recursively runs the Collatz sequence from target, storing each result in seen_array.
	long long Collatz (long long target, vector<long long>& seen_array, int MAX_NUMBER);

	// Finds the longest Collatz chain under 1,000,00.
	long long Answer ();

}