#include "stdafx.h"
#include "Robot_arithmetic_logic_device.h"

Robot_arithmetic_logic_device::Robot_arithmetic_logic_device() {
	commands = {
		{"MOVE",new Robot_command_move()},
		{"RIGHT", new Robot_command_turn_right()},
		{"LEFT",new Robot_command_turn_left()},
		{"PUT",new Robot_command_put_marker()},
		{"TAKE",new Robot_command_take_marker()}
	};
}

bool Robot_arithmetic_logic_device::execute_command(string name_of_command, Robot_field* Current_field, Cell_coordinates* Robot_coordinates, Robot_direction* Robot_direction, Robot_container* Robot_container) {
	try {
		commands[name_of_command]->execute(Current_field, Robot_coordinates, Robot_direction, Robot_container);
		return true;
	}
	catch (...) {
		cout << "Ошибка.Команда не найдена." << endl;
		return false;
	}
}

Robot_arithmetic_logic_device::~Robot_arithmetic_logic_device() {
	try {
		map<string, Robot_command*>::iterator map_iter = commands.begin();
		while (map_iter != commands.end()) {
			delete map_iter->second;
			map_iter++;
		}
	}
	catch (...) {
		cout << "Ошибка при удалеемм массива." << endl;
	}
}