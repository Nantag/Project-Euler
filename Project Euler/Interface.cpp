using namespace std;
#include <iostream>
#include "Questions.h"

int main () {
	int question;
	unsigned long long answer;
	while (1) {
		cout << "Which question would you like to run? Please input this as the question's Euler Project number. To exit, type -1." << endl;

		cin >> question;
		if (question == -1) break;
		answer = Questions::Switch (question);

		cout << "The result of question " << question << " is " << answer << endl;
	}
	cout << "Thank you. This program will now exit." << endl;
}