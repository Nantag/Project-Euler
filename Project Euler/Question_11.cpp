#include "Question_11.h"
#include <stdio.h>

int Question_11 () {
	
	FILE* f;
	fopen_s (&f, "./Question_8_Number.txt", "r");
	int* arr = (int*) malloc (1000 * sizeof (int));
	char fc;
	for (int i = 0; !feof (f); i++) {
		fscanf_s (f, "%c", &fc);
		arr[i] = (int) fc - 48;
	}
	fclose (f);

}
