#pragma once

#include "Robot_field.h"
#include "Robot_direction.h"
#include "Robot_container.h"
#include "Cell_coordinates.h"

using namespace std;

class Robot_RAM{
private:
	Robot_field current_field;
	Cell_coordinates robot_coordinates;
	Robot_direction robot_direction;
	Robot_container robot_container;
public:
	void field(Robot_field& new_field);
	Robot_field* field();
	void coordinates(Cell_coordinates& new_coordinates);
	Cell_coordinates* coordinates();
	void direction(Robot_direction& new_direction);
	Robot_direction* direction();
	Robot_container* container();
};