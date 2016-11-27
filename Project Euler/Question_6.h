#pragma once

namespace Question_6 {

	// Finds the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
	long long Answer ();

}

// MATHEMATICAL SOLUTION:
// We want to find (sigma (n = 1 -> 100) [n^2]) - (sigma (n = 1 -> 100) [n]) ^ 2.
// The right side is simple. By the time honored method of split addition, the closed form is ((n)(n+1) / 2).
// The left side is more dificult. The closed form is (n(n+1)(2n+1)) / 6). The proof is outside the scope of this discussion.
// REQ.