#include "Question_11.h"
#include <stdio.h>
#include <stdlib.h>

int Question_11 () {

	int GRID_WIDTH = 20;
	int GRID_HEIGHT = 20;
	int ADJACENT_NUMBERS = 4;
	int EDGE_ROW_CHECK = GRID_WIDTH - ADJACENT_NUMBERS - 1;
	int EDGE_COLUMN_CHECK = GRID_WIDTH - ADJACENT_NUMBERS - 1;

	FILE* f;
	fopen_s (&f, "./Question_11_Numbers.txt", "r");
	int** arr = (int**) malloc (GRID_HEIGHT * sizeof (int*));
	for (int i = 0; i < GRID_HEIGHT; i++) {
		arr[i] = (int*) malloc (GRID_WIDTH * sizeof (int));
		for (int j = 0, k = 0; j < GRID_WIDTH; j++) {
			fscanf_s (f, "%d", &k);
			arr[i][j] = k;
		}
	}
	fclose (f);

	int gsf = 0;
	for (int i = 0; i < GRID_HEIGHT; i++) {
		for (int j = 0; j < GRID_WIDTH; j++) {
			for (int k = 0; k < 4; k++) {
				int target = 0;

				if (k == 0 && j <= EDGE_ROW_CHECK) {
					target = arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3];
				} else if (k == 1 && i <= EDGE_COLUMN_CHECK) {
					target = arr[i][j] * arr[i + 1][j] * arr[i + 2][j] * arr[i + 3][j];
				} else if (k == 2 && j <= EDGE_ROW_CHECK && i <= EDGE_COLUMN_CHECK) {
					target = arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3];
				} else if (k == 3 && j > ADJACENT_NUMBERS && i <= EDGE_COLUMN_CHECK) {
					target = arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3];
				}

				if (target > gsf) {
					gsf = target;
				}
			}
		}
	}

	for (int i = 0; i < GRID_HEIGHT; i++) {
		free (arr[i]);
	}
	free (arr);

	return gsf;
}
