#pragma once

// Finds the 10,001rst prime number.
int Question_7 ();

// NOTES:
// Algorithm used was the Sieve of Eratosthenes, an ancient, relatively fast algorithm.
// Since the Sieve of Eratosthenes is made to find prime numbers below n, not the nth prime nunber,  we must find an upper bound.
// By using the Prime Number Theorem, we can find an upper bound for the nth prime number as n(ln(n) + ln(ln(n))).