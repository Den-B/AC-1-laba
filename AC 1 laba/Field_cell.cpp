#include "stdafx.h"
#include "Field_cell.h"

void Field_cell::set_coordinates(int X, int Y) {
	cellCoordinates.setCoordinates(X, Y);
}

void Field_cell::set_coordinates(Cell_coordinates* new_coordinates) {
	cellCoordinates.setCoordinates(new_coordinates->get_x(), new_coordinates->get_y());
}

void Field_cell::set_color(int new_color) {
	color = new_color;
}

void Field_cell::set_character(int new_character) {
	character = new_character;
}

int Field_cell::get_color() {
	return color;
}

char Field_cell::get_character() {
	return character;
}
bool Field_cell::set_item(string new_item) {
	if (container_item == "void" || container_item == "default") {
		container_item = new_item;
		if (new_item == "item") {
			color = 160;
		}
		return true;
	}
	else return false;
}

string Field_cell::remove_item() {
	string buff;
	if (container_item != "block") {
		buff = container_item;
		container_item = "void";
		color = 752;
		return buff;
	}
	else return "error";
}

string Field_cell::check_cell() {
	return container_item;
}

