#pragma once

namespace Question_9 {

	// Returns abc such that a + b + c = 1000 and a^2 + b^2 = c^2.
	int Answer ();

}


// MATHEMATICAL SOLUTION:
//		We assume that the answer is a primative pythagorean triple. 
//		First, we want to find a,b,c such that a + b + c = 1000.
//		By Euclid's formula, a = m^2 - n^2, b = 2mn, c = m^2 + n^2 for m > n > 0.
//		So m^2 - n^2 + 2mn + m^2 + n^2 = 1000 => 2m^2 + 2mn = 1000 => m(m+n) = 500.
//		By quick analysis of the prime factors of 500, we find that m = 20 and n = 5, so that 20 * (20 + 5) = 500.
//		So a = 20^2 - 5^2 , b = 2*20*5, c = 20^2 + 5^2 => a = 375, b = 200, c = 425.
//		So abc = 375 * 200 * 425 = 31875000.