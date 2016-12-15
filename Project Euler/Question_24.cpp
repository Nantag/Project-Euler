using namespace std;
#include "Question_24.h"
#include <vector>
#include <algorithm>

namespace Question_24 {

	long answer() {

		const int PERM_NUM = 1000000;
		vector<int> Permutations;


		sort(Permutations.begin(), Permutations.end());

		return Permutations[PERM_NUM];

	}

}