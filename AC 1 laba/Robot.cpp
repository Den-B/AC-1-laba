#include "stdafx.h"
#include "Robot.h"

Robot::Robot() {
	control = new Robot_control();
}

Robot_RAM* Robot:: get_access_to_RAM() {
	return control->get_access_to_RAM();
}

void Robot:: execute_command(string new_command) {
	control->execute_command(new_command);
}

Robot::~Robot() {
	delete control;
}