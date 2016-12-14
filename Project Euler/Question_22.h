#pragma once

namespace Question_22 {

	// Calculates the alphabetical value * sorted position for each word in Question_22_Names.txt.
	long long Answer();

}

// No real challenge encountered. Problem is simple, consisting of three parts.
//		1. Reading in comma seperated array.
//		2. Sorting the array.
//		3. Calculating the alphabetical value.
// We note that it takes far longer to remove the quotation marks than to simply ignore them.
// The first and second part were condensed by using a std::set to perform sorted insert.

// Out of curiosity and advice that vectors take far less time to itterate through, a time comparision between vectors and sets was made.
// 100,000 words were used, as to provide a meaningful timeframe. Vectors used over 100% more time to complete the task.
// Therefore, the advantage of sorted insert far outweights the advantage of faster iteration.
