using namespace std;
#include "Question_18.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>

namespace Question_18 {

	long Answer () {

		const int TRIANGLE_ROWS = 15;

		// Scans the triangle into a triangular dimmensional array.
		ifstream file;
		file.open ("./Question_18_Triangle.txt");
		int input;
		vector<vector<int>> rows (TRIANGLE_ROWS);
		for (int i = 0; i < TRIANGLE_ROWS; ++i) {
			for (int j = 0; (j <= i && file >> input); ++j) {
				rows[i].push_back (input);
			}
		}
		file.close ();

		// Determines the maximum sum path dynamically, top down.
		for (int i = (TRIANGLE_ROWS - 2); i >= 0; --i) {
			int mem_row = i + 1;
			for (int j = 0; j <= i; ++j) {
				rows[i][j] += max (rows[mem_row][j], rows[mem_row][j + 1]);
			}
		}

		return rows[0][0];
	}

}