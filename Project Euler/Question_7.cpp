#include "Question_7.h"
#include <stdlib.h>
#include <math.h>

int Question_7 () {
	int Prime_Index = 0;
	int bound = (int)(10001 * (log (10001) + log (log (10001))));
	int* Sieve_List = (int *) calloc ( bound, sizeof (int));
	int i = 2;
	while (Prime_Index < 10001) {
		if (Sieve_List[i]) {
			i++;
		} else {
			Sieve_List[i]++;
			for (int j = i; j < bound; j += i) {
				Sieve_List[j]++;
			}
			Prime_Index++;
		}
	}
	return i;
	free (Sieve_List);
}