#pragma once
#include "Robot_command.h"

using namespace std;

class Robot_command_put_marker :public Robot_command {
public:
	virtual void execute(Robot_field* Current_field, Cell_coordinates* Current_coordinates, Robot_direction* Current_direction, Robot_container* Current_container);
};