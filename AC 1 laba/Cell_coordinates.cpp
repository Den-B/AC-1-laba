#include "stdafx.h"
#include "Cell_coordinates.h"


void Cell_coordinates::setCoordinates(int X, int Y) {
	this->x = X;
	this->y = Y;
}


bool Cell_coordinates::up() {
	if (y >= 1) {
		y = y - 1;
		return true;
	}
	else return false;
}

bool Cell_coordinates::down() {
	if (y <= 8) {
		y = y + 1;
		return true;
	}
	else return false;
}

bool Cell_coordinates::left() {
	if (x >= 1) {
		x = x - 1;
		return true;
	}
	else return false;
}

bool Cell_coordinates::right() {
	if (x <= 8) {
		x = x + 1;
		return true;
	}
	else return false;
}

int Cell_coordinates::get_x() {
	return this->x;
}
int Cell_coordinates::get_y() {
	return this->y;
}