#include "stdafx.h"
#include "Robot_container.h"

Robot_container::Robot_container() {
	robot_container = new vector<string>();
}

bool Robot_container::add_new_item(string new_item) {
	if (new_item == "item") {
		robot_container->push_back(new_item);
		return true;
	}
	else return false;
}

string Robot_container::delete_last_item() {
	if (robot_container->size() > 0) {
		buffer = robot_container->back();
		robot_container->pop_back();
		return buffer;
	}
	else return "error";
}

void Robot_container::clear() {
	robot_container->clear();
}

int Robot_container::count() {
	return robot_container->size();
}
Robot_container::~Robot_container() {
	delete robot_container;
}