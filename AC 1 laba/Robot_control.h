#pragma once
#include <vector>
#include "Robot_arithmetic_logic_device.h"
#include "Robot_RAM.h"

using namespace std;

class Robot_control {
private:
	Robot_RAM* robot_memory;
	Robot_arithmetic_logic_device* robot_logic;
public:
	Robot_control();
	bool execute_command(string new_command);
	Robot_RAM* get_access_to_RAM();
	~Robot_control();
};

