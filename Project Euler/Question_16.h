#pragma once

class BigInteger;

namespace Question_16 {

	// Finds the number of digits in a BigInteger.
	int Count_Digits (BigInteger target);

	// Finds the sum of the digits of 2^1000.
	int Answer ();

}

// Solution requires use of integers larger than 64 bit. Consideration was taken upon creating own library.
// Decided upon using third-party library for time. 
// Note solution is possible without use of large integers.
// MATHEMATICAL SOLUTION:
//		By definition, 2^1000 can be expressed in binary as 1 followed by 1000 zeroes. 
//		The  digit sum of a number x in base b is:
//			Sigma (n=0 -> log[b](x)) ((1 / (b ^ n)) * ((x % (b ^ (n + 1))) - x % (b ^ n))
//		Proof of this formula is beyond the scope of this discussion.
//		Let x represent 2^1000 in base 2, so b =2.
//		So the answer can be represented as:
//			Sigma (n=0 -> 1000) ((1 / (2 ^ n)) * ((x % (2 ^ (n + 1))) - x % (2 ^ n))