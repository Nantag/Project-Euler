#include "Question_5.h"

int Question_5 () {
	for (int i = 20;; i += 20) {
		for (int j = 19; j > 1; j--) {
			if (i % j) {
				break;
			} else if (j == 2) {
				return i;
			}
		}
	}
}