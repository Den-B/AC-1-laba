#include "stdafx.h"
#include "Robot_control.h"

Robot_control::Robot_control() {
	robot_memory = new Robot_RAM();
	robot_logic = new Robot_arithmetic_logic_device();
}

bool Robot_control::execute_command(string new_command) {
	if (robot_logic->execute_command(new_command, robot_memory->field(), robot_memory->coordinates(), robot_memory->direction(), robot_memory->container())) return true;
	else return false;
}

Robot_RAM* Robot_control::get_access_to_RAM() {
	return robot_memory;
}

Robot_control::~Robot_control() {
	delete robot_memory;
	delete robot_logic;
}
