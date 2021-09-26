#include "stdafx.h"
#include "Robot_command_put_marker.h"

void Robot_command_put_marker::execute(Robot_field* Current_field, Cell_coordinates* Current_coordinates, Robot_direction* Current_direction, Robot_container* Current_container) {
	if (Current_container->count() > 0 && Current_field->cell(Current_coordinates)->check_cell() == "void") {
		Current_field->cell(Current_coordinates)->set_item(Current_container->delete_last_item());
	}
}