#pragma once

// Finds the shortest passcode that fits the given information.
namespace Question_79 {
	long Answer ();
}

//	We note that there are no duplicate numbers in the sequence.
//	LOGICAL SOLUTION:
//		We note 7 is always either absent or the first number, and 0 is either absent or the last number.
//		From this, we can quickly determine the rest of the passcode by working backwards.
//		9 is absent, behind zero, or the last number.
//		A priori, we can determine that the sequence is 731627890 easily by hand.
//	ALGORITHM:
//		1: Create a directional graph using the given keylog.
//		2: Run a topological sort on the graph.
//		3: The resultant graph will be the answer, read backwards from the first (and only) leaf.
//		Note this algorithm assumes that there are no duplicate numbers in the sequence.
//		This algorithm will be implemented later.