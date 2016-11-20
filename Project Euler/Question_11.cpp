#include "Question_11.h"
#include <stdio.h>
#include <stdlib.h>

int Question_11 () {

	FILE* f;
	fopen_s (&f, "./Question_11_Numbers.txt", "r");
	int** arr = (int**) malloc (20 * sizeof (int*));
	for (int i = 0; i < 20; i++) {
		arr[i] = (int*) malloc (20 * sizeof (int));
		for (int j = 0, k = 0; j < 20; j++) {
			fscanf_s (f, "%d", &k);
			arr[i][j] = k;
		}
	}
	fclose (f);

	int gsf = 0;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			for (int k = 0; k < 4; k++) {
				int target = 0;

				if (k == 0 && j <= 16) {
					target = arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3];
				} else if (k == 1 && i <= 16) {
					target = arr[i][j] * arr[i + 1][j] * arr[i + 2][j] * arr[i + 3][j];
				} else if (k == 2 && j <= 16 && i <= 16) {
					target = arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3];
				} else if (k == 3 && j >= 3 && i <= 16) {
					target = arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3];
				}

				if (target > gsf) {
					gsf = target;
				}
			}
		}
	}

	for (int i = 0; i < 20; i++) {
		free (arr[i]);
	}
	free (arr);

	return gsf;
}
