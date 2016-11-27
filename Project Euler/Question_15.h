#pragma once

// Finds the number of possible paths through a lattice grid.
unsigned long long Question_15 ();

// There are multiple ways to solve this problem.
// Solution 1 (Recursive Brute Force):
//		This solution essentially checks every path by manually checking it's existence.
//		It begins at the top left point of the lattice, and runs itself on the point to it's east and south.
//		The function terminate once they hit the corner, and return the number of paths they found.
//		At the end, the first function returns the total number of paths found.
// Solution 2 (Pascal's Triangle):
//		The paths can be expressed as the center column of Pascal's triangle.
//		We can rationalize this by visualizing the grid as a diamond, with the start point at the top.
//		We notice that the number of paths that each grid point has is expressable as the sum of the paths to
//		the node above it (except for the start node, which has one path to itself, facceciously).
//		So if we write out the center column of Pascal's triangle, we get the result as the 20th entry.
// Solution 3 (Binomial Coefficient):
//		The center columns of Pascal's Triangle are expressable as the closed form equation:
//		((2n!) / (n! * (2n-n)!)), where n is the column's entry (in our case, the grid size).
//		Solving this computationally is simple, although care must be taken to not overflow.
//		This solution was not chosen as it not particularly interesting to solve, although it is clearly
//		the most efficient solution by far.
// Solution 4 (Dynamic Programming / Inverted Pascal's Triangle):
//		I've seen this solution when comparing my solution to other answers. It is directly a reverse of 
//		solution 2. Starting Pascal's triangle from the end point and working upwards. No further comment.