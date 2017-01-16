using namespace std;
#include "Question_24.h"
#include <string>
#include <algorithm>

namespace Question_24 {

	unsigned long long Answer() {

		const int PERM_NUM = 1000000;
		string Permutor = "0123456789";

		for (int i = 1; i < PERM_NUM; ++i) {
			next_permutation(Permutor.begin(), Permutor.end());
		}

		return stoull(Permutor);
	}

}