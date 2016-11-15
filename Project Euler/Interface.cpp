#include <stdio.h>
#include "Question_1.h"
#include "Question_2.h"
#include "Question_3.h"
#include "Question_4.h"
#include "Question_5.h"

int main () {
	char input;
	while (1) {
		int question = 0;
		long answer = 0;
		printf ("Which question would you like to run? Please input this as the question's Euler Project number.\n");
		scanf_s ("%d", &question);

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
		}

		printf ("The result of question %d is %d.\n", question, answer);
		printf ("Would you like to run another question? (Y/N)\n");
		scanf_s (" %c", &input, 1);
		if (input == 'N' || input == 'n') {
			break;
		}
	}
	printf ("Thank you. This program will now exit.\n");
}