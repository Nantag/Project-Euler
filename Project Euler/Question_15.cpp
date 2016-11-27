using namespace std;
#include <vector>
#include "Question_15.h"

unsigned long long Question_15 () {

	const int GRID_SIZE = 20;

	int grid_points = GRID_SIZE + 1;
	vector<vector<unsigned long long>> grid_memory (grid_points, vector<unsigned long long> (grid_points));

	for (int i = 0; i < grid_points; i++) {
		grid_memory[0][i] = 1;
		grid_memory[i][0] = 1;
	}

	for (int i = 1; i < grid_points; i++) {
		for (int j = 1; j < grid_points; j++) {
			grid_memory[i][j] = grid_memory[i - 1][j] + grid_memory[i][j - 1];
		}
	}

	return grid_memory[GRID_SIZE][GRID_SIZE];

}