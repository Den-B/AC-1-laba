#include "stdafx.h"
#include "Robot_command_turn_right.h"

void Robot_command_turn_right::execute(Robot_field* Current_field, Cell_coordinates* Current_coordinates, Robot_direction* Current_direction, Robot_container* Current_container) {
	Current_direction->right();
}