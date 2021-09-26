#pragma once
#include "Robot_command.h"
#include "Robot_command_Move.h"
#include "Robot_command_turn_left.h"	
#include "Robot_command_turn_right.h"
#include "Robot_command_take_marker.h"
#include "Robot_command_put_marker.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Robot_arithmetic_logic_device{
private:
	map<string, Robot_command*> commands;
public:
	Robot_arithmetic_logic_device();
	bool execute_command(string name_of_command, Robot_field* Current_field, Cell_coordinates* Robot_coordinates, Robot_direction* Robot_direction, Robot_container* Robot_container);
	~Robot_arithmetic_logic_device();
};

