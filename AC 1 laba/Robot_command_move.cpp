#include "stdafx.h"
#include "Robot_command_move.h"

void Robot_command_move::execute(Robot_field* Current_field, Cell_coordinates* Current_coordinates, Robot_direction* Current_direction, Robot_container* Current_container) {
	string next_cell_status = Current_field->next_cell_value(Current_direction->current_direction(), Current_coordinates);
	switch (Current_direction->current_direction()) {
	case '^':
		if (next_cell_status != "block" && next_cell_status != "exit") {
			Current_coordinates->up();
		}
		break;
	case '>':
		if (next_cell_status != "block" && next_cell_status != "exit") {
			Current_coordinates->right();
		}
		break;
	case 'v':
		if (next_cell_status != "block" && next_cell_status != "exit") {
			Current_coordinates->down();
		}
		break;
	case '<':
		if (next_cell_status != "block" && next_cell_status != "exit") {
			Current_coordinates->left();
		}
		break;
	default:
		break;
	}
}