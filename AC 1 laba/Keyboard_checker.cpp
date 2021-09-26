#include "stdafx.h"
#include "Keyboard_checker.h"

string Keyboard_checker::get_key_command() {
	int checker;
	checker = _getch();
	switch (checker) {
	case 72:
		return "MOVE";	//	MOVE
	case 119:
		return "MOVE";
	case 150:
		return "MOVE";
	case 230:
		return "MOVE";
	case 87:
		return "MOVE";
	case 77:
		return "RIGHT";	//	RIGHT
	case 100:
		return "RIGHT";
	case 130:
		return "RIGHT";
	case 162:
		return "RIGHT";
	case 68:
		return "RIGHT";
	case 75:
		return "LEFT";	//	LEFT
	case 148:
		return "LEFT";
	case 228:
		return "LEFT";
	case 65:
		return "LEFT";
	case 97:
		return "LEFT";
	case 13:
		return "TAKE";	//	Others
	case 83:
		return "PUT";
	case 27:
		return "END";
	default:
		return "ERROR";
	}
}