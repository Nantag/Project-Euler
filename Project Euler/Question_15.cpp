#include "Question_15.h"

int Question_15 () {
	Lattice_Position target = { 0,19 };
	return Lattice_Down (target) + Lattice_Right (target);
}