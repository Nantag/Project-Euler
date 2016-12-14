using namespace std;
#include "Question_22.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace Question_22 {

	long long Answer() {

		int sum = 0;
		vector<string> Names;

		// Reads in the names.
		ifstream file;
		string input;
		file.open("./Question_22_Names.txt");
		while (getline(file, input, ',')) {
			Names.emplace_back(input);
		}
		file.close();

		// Sorts the list.
		sort(Names.begin(), Names.end());

		// Calculates the required value for the question.
		int NON = Names.size();
		for (int i = 0; i < NON; i++) {
			for (char& c : Names[i]) {
				if (!(c == '"')) {
					sum += ((c - 64) * (i + 1));
				}
			}
		}
		
		return sum;
	}

}