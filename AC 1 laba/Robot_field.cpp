#include "stdafx.h"
#include "Robot_field.h"

void Robot_field::write_field() {
	ifstream file_reader;
	file_reader.open("field.txt");
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			cells[i][k].set_coordinates(k, i);
			file_reader >> buffer;
			switch (buffer) {
			case 0:
				cells[i][k].set_item("void");
				cells[i][k].set_color(752);
				break;
			case 1:
				cells[i][k].set_item("item");
				cells[i][k].set_color(160);
				break;
			case 2:
				cells[i][k].set_item("block");
				cells[i][k].set_color(64);
				break;
			default:
				cells[i][k].set_item("error");
				cells[i][k].set_color(592);
			}
		}
	}
	file_reader.close();
}


Robot_field::Robot_field() {
	cells = new Field_cell * [10];
	for (int i = 0; i < 10; i++) {
		cells[i] = new Field_cell[10];
	}
	write_field();
}

string Robot_field::check_cell(int X, int Y) {
	return cells[Y][X].check_cell();
}

string Robot_field::check_cell(Cell_coordinates* coordinates) {
	return cells[coordinates->get_y()][coordinates->get_x()].check_cell();
}

Field_cell* Robot_field::cell(int X, int Y) {
	return &cells[Y][X];
}

Field_cell* Robot_field::cell(Cell_coordinates* coordinates) {
	return &cells[coordinates->get_y()][coordinates->get_x()];
}

string Robot_field::next_cell_value(char current_direction, Cell_coordinates* cell_coordinates) {
	Cell_coordinates buffer_checker = *cell_coordinates;
	switch (current_direction) {
	case '^':
		if (buffer_checker.up()) {
			return check_cell(&buffer_checker);
		}
		else "exit";
		break;
	case '>':
		if (buffer_checker.right()) {
			return check_cell(&buffer_checker);
		}
		else
			return "exit";
		break;
	case '<':
		if (buffer_checker.left()) {
			return check_cell(&buffer_checker);
		}
		else
			return "exit";
		break;
	case 'v':
		if (buffer_checker.down()) {
			return check_cell(&buffer_checker);
		}
		else return "exit";
		break;
	default:
		std::cout << "Îøèáêà.RobotDirectionErrot";
	}
}

Field_cell** Robot_field::Field() {
	return this->cells;
}

Robot_field::~Robot_field() {
	for (int i = 0; i < 10; i++) {
		delete[] cells[i];
	}
}
