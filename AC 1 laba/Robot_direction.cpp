#include "stdafx.h"
#include "Robot_direction.h"

void Robot_direction::set_direction(char new_direction) {
	direction = new_direction;
}

char Robot_direction::right() {
	switch (direction) {
	case '^':
		direction = '>';
		break;
	case '>':
		direction = 'v';
		break;
	case 'v':
		direction = '<';
		break;
	case '<':
		direction = '^';
		break;
	default:
		cout << "Îøèáêà.RobotDirectionErrot";
	}
	return direction;
}

char Robot_direction::left() {
	switch (direction) {
	case '^':
		direction = '<';
		break;
	case '>':
		direction = '^';
		break;
	case 'v':
		direction = '>';
		break;
	case '<':
		direction = 'v';
		break;
	default:
		std::cout << "Îøèáêà.RobotDirectionErrot.";
	}
	return direction;
}

char Robot_direction::current_direction() {
	return direction;
}