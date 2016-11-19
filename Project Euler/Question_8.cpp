#include "Question_8.h"
#include <stdio.h>
#include <stdlib.h>

long long Question_8 () {

	FILE* f;
	fopen_s (&f, "./Question_8_Number.txt", "r");
	int* arr = (int*) malloc (1000 * sizeof (int));
	char fc;
	for (int i = 0; !feof (f); i++) {
		fscanf_s (f, "%c", &fc);
		arr[i] = (int) fc - 48;
	}
	fclose (f);


	long long gsf = 0;

	for (int i = 0; i < 987; i++) {
		long long target = 1;
		for (int j = i; j < i + 13; j++) {
			target *= arr[j];
		}
		if (target > gsf) {
			gsf = target;
		}
	}

	// Throws an error in Visual Studios debugger. As far as I can tell, this is Visual Studios being stupid.
	free (arr);

	return gsf;
}
