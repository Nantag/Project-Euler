#pragma once

namespace Question_12 {

// Finds the number of divisors a number has.
	int Count_Divisors (int target);

	// Finds the first triangular number with over 500 divisors.
	int Answer ();

}

// MATHEMATICAL SOLUTION:
//		We first note that the nth triangular number has the closed form ((n) * (n+1)) / 2, by split addition.
//		We also note that for any coprime a,b, Divisors (a) * Divisors (b) = Divisors (ab). Proof is outside the scope of this discussion.
//		We then prove that if n is even, (n / 2) and (n + 1) are coprime, and if n is odd, (n) and ((n + 1) / 2).
// PROOF:
//		Let y divide (n / 2) and (n + 1). So there exists integer a,b such that n / 2 = ay and n + 1 = by.
//		Note that n must be even, as (n / 2) would not be an integer if n was odd.
//		So n = 2ay, so n + 1 - n = by - 2ay =>  1 = (b - 2a)y. Since 1 is the only number that divides 1, y must equal 1.
//		The second proof is analogous. 
//		So to find the divisors of (n * (n + 1)) / 2, we can find the product of the divisors of it's coprime components.