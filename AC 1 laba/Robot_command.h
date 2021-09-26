#pragma once
#include "Robot_field.h"
#include "Robot_direction.h"
#include "Robot_container.h"
#include "Cell_coordinates.h"

class Robot_command { //	abstract
public:
	virtual void execute(Robot_field* Current_field, Cell_coordinates* Current_coordinates, Robot_direction* Current_direction, Robot_container* Current_container) = 0;
};