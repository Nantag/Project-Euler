#pragma once

struct Lattice_Position {
	int x;
	int y;
};

int Lattice_Right (Lattice_Position target);

int Lattice_Down (Lattice_Position target);

int Question_15 ();