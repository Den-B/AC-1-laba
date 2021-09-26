#pragma once
#include "Robot_control.h"

using namespace std;

class Robot {
private:
	Robot_control* control;
public:
	Robot();
	Robot_RAM* get_access_to_RAM();
	void execute_command(string new_command);
	~Robot();
};


