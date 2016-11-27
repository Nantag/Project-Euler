using namespace std;
#include <string>
#include <iostream>
#include <fstream>
#include "Question_13.h"

namespace Question_13 {

	int Count_Digits (unsigned long long target) {
		int count = 0;
		while (target != 0) {
			target /= 10;
			count++;
		}
		return count;
	}

	long long Answer () {

		const int FIRST_NUMBERS = 10;

		// Sums up the foremost digits of the file's numbers.
		ifstream file;
		file.open ("./Question_13_Numbers.txt");
		string input;
		unsigned long long answer = 0;
		while (file >> input) {
			unsigned long long in_Ans = stoll (input.substr (0, FIRST_NUMBERS + 1));
			answer += in_Ans;
		}
		file.close ();

		// Truncates the numbers to the required answer.
		int Digits = Count_Digits (answer);
		while (Digits > FIRST_NUMBERS) {
			answer /= 10;
			Digits--;
		}

		return answer;
	}

}