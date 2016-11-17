#pragma once

// Checks if a number is prime. Algorithm is non-optimal, but suffices.
bool IsPrime (int target);

// Finds the smallest positive number that is evenly divisible by all the numbers from 1 to 20.
int Question_5 ();

// MATHEMATICAL SOLUTION:
// First, consider that 4,6,8,9,10,12,14,15,16,18, and 20 are not prime.
// We note 4 = 2*2, 6 = 3*2, 8 = 2*2*2, 9 = 3*3, 10 = 5*2, 12 = 6*2, 14 = 7*2, 16 = 2*2*2, 18 = 9*2, and 20 = 5*2*2.
// Consider x = 2^4 * 3^2 * 5 * 7 * 11 * 13 * 17 * 19. Note that all primes are present, and all non-primes can be formulated.
// Therefore, by definition, x is divisible by all numbers from 1 to 20. This also holds by inspection.
// Q.E.D.

// This solution is interesting due to the general algorithm given for solving the general problem.

// GENERAL ALGORITHM FOR THE SMALLEST NATURAL NUMBER DIVISIBLE BY ALL NUMBERS FROM A TO B:
//		1: Identify all prime numbers between A and B. Let x equal their product.
//		2: For each prime, identify all it's powers between A and B. 
//		3: For each prime with a power above 1 in step 2, multiply x by the relevant prime.
//		4: x will now be divisible by every number between A and B.
