using namespace std;
#include <iostream>
#include "Question_1.h"
#include "Question_2.h"
#include "Question_3.h"
#include "Question_4.h"
#include "Question_5.h"
#include "Question_6.h"
#include "Question_7.h"
#include "Question_8.h"
#include "Question_9.h"
#include "Question_10.h"
#include "Question_11.h"
#include "Question_12.h"
#include "Question_13.h"
#include "Question_14.h"

int main () {
	int question;
	unsigned long long answer;
	while (1) {
		cout << "Which question would you like to run? Please input this as the question's Euler Project number. To exit, type -1." << endl;
		cin >> question;
		if (question == -1) break;
		
		// All function calls goes into the switch statement.
		switch (question) {
			case 1:
				answer = Question_1 ();
				break;
			case 2:
				answer = Question_2 ();
				break;
			case 3:
				answer = Question_3 ();
				break;
			case 4:
				answer = Question_4 ();
				break;
			case 5:
				answer = Question_5 ();
				break;
			case 6:
				answer = Question_6 ();
				break;
			case 7:
				answer = Question_7 ();
				break;
			case 8:
				answer = Question_8 ();
				break;
			case 9:
				answer = Question_9 ();
				break;
			case 10:
				answer = Question_10 ();
				break;
			case 11:
				answer = Question_11 ();
				break;
			case 12:
				answer = Question_12 ();
				break;
			case 13:
				answer = Question_13 ();
				break;
			case 14:
				answer = Question_14 ();
				break;
			default:
				answer = 0;
				break;
		}
		cout << "The result of question " << question << " is " << answer << endl;
	}
	cout << "Thank you. This program will now exit." << endl;
}