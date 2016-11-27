using namespace std;
#include <iostream>
#include <vector>
#include <fstream>
#include "Question_8.h"

long long Question_8::Answer () {

	const int TARGET_ADJACENTS = 13;
	const int NUMBER_SIZE = 1000;
	const int NUMBER_MAXIMUM_TARGET = NUMBER_SIZE - TARGET_ADJACENTS;

	// Reads numbers into an array.
	ifstream file;
	file.open("./Question_8_Number.txt");
	vector<int> arr(NUMBER_SIZE);
	char fc;
	for (int i = 0; file.get(fc); i++) {
		arr[i] = (int) fc - 48;
	}
	file.close();

	// Brute-forces through all sequences.
	long long gsf = 0;
	for (int i = 0; i < NUMBER_MAXIMUM_TARGET; i++) {
		long long target = 1;
		for (int j = i; j < i + TARGET_ADJACENTS; j++) {
			target *= arr[j];
		}
		if (target > gsf) {
			gsf = target;
		}
	}

	return gsf;
}
