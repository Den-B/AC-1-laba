#include "stdafx.h"
#include "Robot_RAM.h"

void Robot_RAM::field(Robot_field& new_field) {
	current_field = new_field;
}

Robot_field* Robot_RAM::field() {
	return &current_field;
}

void Robot_RAM::coordinates(Cell_coordinates& new_coordinates) {
	robot_coordinates = new_coordinates;
}

Cell_coordinates* Robot_RAM::coordinates() {
	return &robot_coordinates;
}

void Robot_RAM::direction(Robot_direction& new_direction) {
	robot_direction = new_direction;
}

Robot_direction* Robot_RAM::direction() {
	return &robot_direction;
}

Robot_container* Robot_RAM::container() {
	return &robot_container;
}