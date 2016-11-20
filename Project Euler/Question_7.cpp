#include "Question_7.h"
#include <stdlib.h>
#include <math.h>

int Question_7 () {

	int TARGET_PRIME = 10001;

	int Prime_Index = 0;
	int bound = (int) (TARGET_PRIME * (log (TARGET_PRIME) + log (log (TARGET_PRIME))));
	int* Sieve_List = (int *) calloc (bound, sizeof (int));
	int i = 1;
	while (Prime_Index < TARGET_PRIME) {
		i++;
		if (!Sieve_List[i]) {
			for (int j = i; j < bound; j += i) {
				Sieve_List[j]++;
			}
			Prime_Index++;
		}
	}
	free (Sieve_List);
	return i;
}