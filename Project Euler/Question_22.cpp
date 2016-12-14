using namespace std;
#include "Question_22.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <set>

namespace Question_22 {

	long long Answer() {

		set<string> Names;

		// Reads in the names.
		ifstream file;
		string input;
		file.open("./Question_22_Names.txt");
		while (getline(file, input, ',')) {
			Names.insert(input);
		}
		file.close();

		// Calculates the required value for the question.
		int index = 0;
		long long sum = 0;
		for (auto name : Names) {
			for (char& c : name) {
				if (!(c == '"')) {
					sum += ((c - 64) * (index + 1));
				}
			}
			index++;
		}
		
		return sum;
	}

}