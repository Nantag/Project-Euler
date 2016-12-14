namespace Question_21 {

	//
	int Proper_Divisors_Sum (int target);

	// Finds the sum of all amicable numbers below 10,000.
	int Answer();

	// Finding amicable numbers is not particularly dificult algorithmically. 
	// It is a simple matter of comparing the sum of proper divisors of each number.
	// Finding the sum of proper divisors, on the other hand, is more interesting. The brute force method works fine, but is slow.
	// An alternative algorithm is used, based on properties of the divisor function.
	// ALGORITHM:
	//		1. Find the prime factorization of the number.
	//		2. Sum the prime factors using the following formula:
	//			Pi (n=0 -> i) [(F{n}^(P{n} + 1) - 1) / (F{n} - 1)], 
	//				where i is the number of prime factors, F{n} is the nth prime factor, and P{n} is the power of the nth prime factor.
	//		3. The sum is the sum of divisors.
	//		4. sum - number = sum of proper divisors, as the number itself is the only improper divisor in the sum.
}