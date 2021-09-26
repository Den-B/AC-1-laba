#include "stdafx.h"
#include "Robot_command_take_marker.h"

void Robot_command_take_marker::execute(Robot_field* Current_field, Cell_coordinates* Current_coordinates, Robot_direction* Current_direction, Robot_container* Current_container) {
	if (Current_field->cell(Current_coordinates)->check_cell() == "item") {
		Current_container->add_new_item((Current_field->cell(Current_coordinates))->remove_item());
	}
}