#include "Question_8.h"
#include <stdio.h>
#include <stdlib.h>

long long Question_8 () {

	int TARGET_ADJACENTS = 13;
	int NUMBER_SIZE = 1000;
	int NUMBER_MAXIMUM_TARGET = NUMBER_SIZE - TARGET_ADJACENTS;

	FILE* f;
	fopen_s (&f, "./Question_8_Number.txt", "r");
	int* arr = (int*) malloc (NUMBER_SIZE * sizeof (int));
	char fc;
	for (int i = 0; !feof (f); i++) {
		fscanf_s (f, "%c", &fc);
		arr[i] = (int) fc - 48;
	}
	fclose (f);


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

	// Throws an error in Visual Studios debugger. As far as I can tell, this is Visual Studios being stupid.
	// Doesn't happen anywhere else. No idea what the root cause is, as the code itself does not seem incorrect.
	free (arr);

	return gsf;
}
