#pragma once

// Finds the smallest positive number that is evenly divisible by all the numbers from 1 to 20.
int Question_5 ();

// MATHEMATICAL SOLUTION:
// To find a number which is evenly divided by all numbers from 1 to 20:
// First, consider that 4,6,8,9,10,12,14,15,16,18, and 20 are not prime.
// Consider 8 * 9 * 5 * 7 * 11 * 13 * 17 * 19, using LCM. Note that this number can be divided by all numbers from 1 to 20.
// Q.E.D.